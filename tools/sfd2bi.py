#!/usr/bin/env python3
"""Generate FreeBASIC .bi headers from AmigaOS SFD files."""
import sys, re, os

TYPE_MAP = {
    'VOID': '', 'void': '', 'LONG': 'Long', 'ULONG': 'ULong',
    'WORD': 'Short', 'UWORD': 'UShort', 'BYTE': 'Byte', 'UBYTE': 'UByte',
    'BOOL': 'Short', 'APTR': 'Any Ptr', 'CONST_APTR': 'Any Ptr',
    'STRPTR': 'ZString Ptr', 'CONST_STRPTR': 'Const ZString Ptr',
    'BPTR': 'Long', 'BSTR': 'Long', 'FLOAT': 'Single', 'DOUBLE': 'Double',
}

def map_type(ctype):
    ctype = ctype.strip()
    if '(' in ctype: return 'Any Ptr'
    ptr = ctype.count('*')
    base = re.sub(r'\*|struct |const |CONST ', '', ctype).strip()
    fb = TYPE_MAP.get(base)
    if fb is None: fb = base if base else 'Any'
    if fb == '' and ptr: return 'Any Ptr'
    if fb == '': return ''
    return fb + (' Ptr' * ptr)

def parse_sfd(filename):
    funcs, libname = [], ''
    is_public = True
    with open(filename) as f:
        for line in f:
            line = line.rstrip()
            if line.startswith('==libname'): libname = line.split()[-1]
            elif line == '==private': is_public = False
            elif line == '==public': is_public = True
            elif is_public and not line.startswith(('==', '*', '-', ' ')):
                m = re.match(r'([\w\s\*]+?)\s+(\w+)\(\s*(.*?)\s*\)\s*\((.*?)\)', line)
                if m:
                    funcs.append((m.group(1).strip(), m.group(2), m.group(3), m.group(4)))
    return libname, funcs

def generate_bi(libname, funcs, outdir):
    name = libname.replace('.library', '').replace('.device', '')
    lines = [
        f"' FreeBASIC header for {libname}",
        f"' Auto-generated from NDK 3.2 SFD - {len(funcs)} functions",
        "", f"#ifndef __AMIGA_{name.upper()}_BI__",
        f"#define __AMIGA_{name.upper()}_BI__", ""
    ]
    for ret, fname, params, regs in funcs:
        fb_ret = map_type(ret)
        fb_params = []
        if params.strip():
            for p in re.split(r',(?![^()]*\))', params):
                p = p.strip()
                if not p: continue
                if '(' in p:
                    fb_params.append("ByVal proc As Any Ptr")
                    continue
                parts = p.rsplit(None, 1)
                if len(parts) == 2:
                    ptype, pname = parts[0], parts[1].lstrip('*')
                    if '*' in parts[1]: ptype += ' *'
                else:
                    ptype, pname = p, 'arg'
                fb_t = map_type(ptype)
                if fb_t: fb_params.append(f"ByVal {pname} As {fb_t}")
        ps = ', '.join(fb_params)
        if fb_ret:
            lines.append(f"Declare Function {fname}({ps}) As {fb_ret}")
        else:
            lines.append(f"Declare Sub {fname}({ps})")
    lines += ["", "#endif", ""]
    outpath = os.path.join(outdir, f"{name}.bi")
    with open(outpath, 'w') as f: f.write('\n'.join(lines))
    return outpath, len(funcs)

if __name__ == '__main__':
    outdir = sys.argv[1]
    os.makedirs(outdir, exist_ok=True)
    for sfd in sys.argv[2:]:
        libname, funcs = parse_sfd(sfd)
        if funcs:
            path, count = generate_bi(libname, funcs, outdir)
            print(f"  {path} ({count} functions)")
        else:
            print(f"  {sfd}: no functions found")
