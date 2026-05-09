#!/usr/bin/env python3
"""Fix clang computed goto issue in FreeBASIC-generated C files.

Clang requires at least one &&label expression in any function that uses
indirect goto (goto *ptr). FreeBASIC's error handling emits goto *ptr from
fb_ErrorThrowAt without a corresponding &&label. This script adds a dummy
label address to affected functions.
"""
import re
import sys


def fix_file(filepath):
    with open(filepath) as f:
        content = f.read()

    if 'goto *' not in content:
        return False

    lines = content.split('\n')
    new_lines = []
    i = 0
    modified = False

    while i < len(lines):
        new_lines.append(lines[i])

        if (i + 1 < len(lines) and
            re.match(r'^[a-zA-Z_]', lines[i]) and
            '(' in lines[i] and ')' in lines[i] and
            lines[i + 1].strip() == '{'):

            func_start = i + 1
            brace_count = 0
            func_end = func_start
            for j in range(func_start, len(lines)):
                brace_count += lines[j].count('{') - lines[j].count('}')
                if brace_count == 0:
                    func_end = j
                    break

            func_body = '\n'.join(lines[func_start:func_end + 1])
            has_goto_star = bool(re.search(r'goto \*', func_body))
            has_label_addr = '&&label' in func_body or '&&__fb_' in func_body

            if has_goto_star and not has_label_addr:
                i += 1
                new_lines.append(lines[i])  # the { line
                new_lines.append('\t__label__ __fb_dummy_label;')
                new_lines.append('\tif(0) { __fb_dummy_label: ; }')
                new_lines.append('\t(void)&&__fb_dummy_label;')
                modified = True

        i += 1

    if modified:
        with open(filepath, 'w') as f:
            f.write('\n'.join(new_lines))

    return modified


if __name__ == '__main__':
    for path in sys.argv[1:]:
        fix_file(path)
