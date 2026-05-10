# CMake toolchain file for AmigaOS 3.x (m68k)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR m68k)
set(CMAKE_C_COMPILER m68k-amigaos-gcc)
set(CMAKE_AR m68k-amigaos-ar)
set(CMAKE_RANLIB m68k-amigaos-ranlib)

execute_process(COMMAND brew --prefix amiga-gcc OUTPUT_VARIABLE _prefix OUTPUT_STRIP_TRAILING_WHITESPACE)
set(_sysroot "${_prefix}/m68k-amigaos")

set(CMAKE_C_FLAGS_INIT "-m68020 -msoft-float -fomit-frame-pointer -fno-common -isystem ${_sysroot}/sys-include -isystem ${_sysroot}/ndk-include")
set(CMAKE_FIND_ROOT_PATH "${_sysroot}")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

set(FB_TARGET_OS "amiga" CACHE STRING "" FORCE)
set(FB_TARGET_ARCH "m68k" CACHE STRING "" FORCE)
