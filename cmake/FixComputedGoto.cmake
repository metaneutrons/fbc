# cmake/FixComputedGoto.cmake
# Fixes clang "indirect goto in function with no address-of-label expressions" error.
# FreeBASIC's -gen gcc backend emits goto *ptr for error handling, but clang requires
# at least one &&label expression in the same function.
#
# Usage: fb_fix_computed_goto(<list of .c files>)

find_package(Python3 COMPONENTS Interpreter QUIET)

function(fb_fix_computed_goto source_files)
    if(NOT FB_USING_CLANG)
        return()
    endif()

    if(NOT Python3_FOUND)
        message(WARNING "Python3 not found - cannot fix computed goto for clang. Build may fail.")
        return()
    endif()

    set(_script "${CMAKE_SOURCE_DIR}/cmake/fix_computed_goto.py")
    foreach(_src ${${source_files}})
        add_custom_command(
            OUTPUT "${_src}.fixed"
            COMMAND ${Python3_EXECUTABLE} "${_script}" "${_src}"
            COMMAND ${CMAKE_COMMAND} -E touch "${_src}.fixed"
            DEPENDS "${_src}" "${_script}"
            COMMENT "Fixing computed goto in ${_src}"
            VERBATIM
        )
    endforeach()
endfunction()
