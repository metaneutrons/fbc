# FreeBASIC

A free, open-source, multi-platform BASIC compiler. Fork of [freebasic/fbc](https://github.com/freebasic/fbc) with a modern CMake build system and macOS Apple Silicon support.

## Supported Platforms

| OS | x86_64 | aarch64 |
|----|--------|---------|
| Linux | ✅ | ✅ |
| macOS | ✅ | ✅ (Apple Silicon) |
| Windows (MinGW) | ✅ | — |

## Building

Requirements:
- CMake 3.20+
- C compiler (GCC or Clang)
- Python 3 (for clang compatibility fixups)
- ncurses (Linux/macOS)

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j$(nproc)
```

The build system automatically bootstraps `fbc` from pre-generated C sources if no existing `fbc` is found.

### Options

| Option | Default | Description |
|--------|---------|-------------|
| `FB_STANDALONE` | `ON` | Self-contained installation layout |
| `FB_BUILD_GFXLIB` | `ON` | Build the graphics library |
| `FB_DISABLE_X11` | platform | Disable X11 graphics driver |
| `FB_ENABLE_XQUARTZ` | `OFF` | Enable X11 via XQuartz on macOS |

### Install

```bash
cmake --install build --prefix /usr/local
```

## Usage

```bash
# Compile a program (uses -gen gcc backend on non-x86)
./build/src/compiler/fbc -gen gcc hello.bas

# Compile to C only (for inspection)
./build/src/compiler/fbc -gen gcc -r hello.bas
```

## What's different from upstream?

- **CMake build system** — replaces the old GNU makefile for supported targets
- **macOS arm64 support** — automatic bootstrap from linux-aarch64 C sources
- **Clang compatibility** — fixes computed goto issues in generated C code
- **GitHub Actions CI** — automated builds for all platforms

The original makefile is still present and works for targets not yet covered by CMake (DOS, Xbox, etc.).

## Architecture

```
src/compiler/   FreeBASIC compiler (fbc), written in FreeBASIC
src/rtlib/      Runtime library (libfb), written in C
src/gfxlib2/    Graphics library (libfbgfx), written in C
bootstrap/      Pre-generated C sources for bootstrapping fbc
inc/            FreeBASIC include files (.bi)
cmake/          Build system modules
```

## License

- Compiler (fbc): GNU GPL v2+
- Runtime libraries (libfb, libfbgfx): GNU LGPL v2+ with static linking exception

See [LICENSE](LICENSE) and [readme.txt](readme.txt) for details.
