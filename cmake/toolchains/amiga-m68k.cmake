# CMake toolchain file for AmigaOS 3.x (m68k)
# Requires: bebbo/amiga-gcc cross-compiler (brew install amiga-gcc)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR m68k)

set(CMAKE_C_COMPILER m68k-amigaos-gcc)
set(CMAKE_AR m68k-amigaos-ar)
set(CMAKE_RANLIB m68k-amigaos-ranlib)

# Find the toolchain sysroot
execute_process(COMMAND m68k-amigaos-gcc -print-sysroot OUTPUT_VARIABLE _sysroot OUTPUT_STRIP_TRAILING_WHITESPACE)
if(NOT _sysroot)
    # Fallback for homebrew install
    execute_process(COMMAND brew --prefix amiga-gcc OUTPUT_VARIABLE _prefix OUTPUT_STRIP_TRAILING_WHITESPACE)
    set(_sysroot "${_prefix}/m68k-amigaos")
endif()

set(CMAKE_C_FLAGS_INIT "-m68020 -fomit-frame-pointer -isystem ${_sysroot}/sys-include -isystem ${_sysroot}/ndk-include")
set(CMAKE_FIND_ROOT_PATH "${_sysroot}")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

# Skip link test
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

# Tell our build system this is an Amiga target
set(FB_TARGET_OS "amiga" CACHE STRING "" FORCE)
set(FB_TARGET_ARCH "m68k" CACHE STRING "" FORCE)
