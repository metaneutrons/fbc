#!/bin/bash
# Build and test a FreeBASIC program for AmigaOS m68k
set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
PROJECT_DIR="$SCRIPT_DIR/../.."
SYSROOT="${AMIGA_GCC_SYSROOT:-/opt/homebrew/Cellar/amiga-gcc/2025.07.13/m68k-amigaos}"
CFLAGS="-m68020 -msoft-float -isystem $SYSROOT/ndk-include -isystem $SYSROOT/sys-include -O2 -fno-builtin"

INPUT="$1"
BASENAME="$(basename "$INPUT" .bas)"
DIR="$(dirname "$INPUT")"

echo "=== FreeBASIC → AmigaOS m68k ==="

# 1. Compile .bas to .c
"$PROJECT_DIR/build/src/compiler/fbc" -gen gcc -r -m "$BASENAME" -target amiga-m68k "$INPUT"

# 2. Compile .c to .o
m68k-amigaos-gcc $CFLAGS -c "$DIR/$BASENAME.c" -o "$DIR/$BASENAME.o"

# 3. Link
m68k-amigaos-gcc $CFLAGS -nostdlib \
  "$SCRIPT_DIR/startup.o" "$DIR/$BASENAME.o" "$SCRIPT_DIR/fb_mini_rt.o" \
  -L$SYSROOT/lib/gcc/m68k-amigaos/6.5.0b -lgcc \
  -o "$DIR/$BASENAME"

echo "Built: $DIR/$BASENAME ($(wc -c < "$DIR/$BASENAME" | tr -d ' ') bytes)"

# 4. Test with vamos if available
if command -v vamos &>/dev/null; then
  echo "--- vamos output ---"
  vamos "$DIR/$BASENAME"
fi
