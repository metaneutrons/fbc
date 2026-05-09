cmake_minimum_required(VERSION 3.20)
project(FreeBASIC VERSION 1.10.2 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# FreeBASIC requires GCC or Clang (MinGW on Windows)
if(MSVC)
    message(FATAL_ERROR
        "MSVC is not supported. Use MinGW-w64 on Windows.\n"
        "Configure with: cmake -G \"MinGW Makefiles\" or use MSYS2.")
endif()

# Options
option(FB_STANDALONE "Build as self-contained installation" ON)
option(FB_BUILD_GFXLIB "Build the graphics library" ON)
option(FB_BUILD_TESTS "Build tests" OFF)

# Platform detection (sets FB_TARGET_OS, FB_TARGET_ARCH, FB_TARGET_ID)
include(cmake/DetectPlatform.cmake)

# Bootstrap logic (determines how to build fbc)
include(cmake/Bootstrap.cmake)

# Install paths (needed by subdirectories)
include(cmake/Install.cmake)

# Runtime library (libfb)
add_subdirectory(src/rtlib)

# Graphics library (libfbgfx) - optional
if(FB_BUILD_GFXLIB)
    add_subdirectory(src/gfxlib2)
endif()

# Compiler (fbc)
add_subdirectory(src/compiler)

# Summary
message(STATUS "")
message(STATUS "FreeBASIC ${PROJECT_VERSION}")
message(STATUS "  Target:     ${FB_TARGET_ID}")
message(STATUS "  OS:         ${FB_TARGET_OS}")
message(STATUS "  Arch:       ${FB_TARGET_ARCH}")
message(STATUS "  Bootstrap:  ${FB_BOOTSTRAP_MODE}")
message(STATUS "  Standalone: ${FB_STANDALONE}")
message(STATUS "  GfxLib:     ${FB_BUILD_GFXLIB}")
message(STATUS "")
