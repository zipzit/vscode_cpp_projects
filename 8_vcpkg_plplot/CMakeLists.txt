# https://github.com/microsoft/vcpkg/issues/11354#issuecomment-633248199
# https://cmake.org/cmake/help/latest/manual/cmake-commands.7.html 

cmake_minimum_required(VERSION 3.12) 
set(CMAKE_TOOLCHAIN_FILE /home/lbc/vcpkg/scripts/buildsystems/vcpkg.cmake)
project(main VERSION 0.1.0)
find_package(plplot CONFIG REQUIRED)
add_executable(main main.cpp)
# Note: 2 target(s) were omitted.
target_link_libraries(main PRIVATE plplot csirocsa qsastime plplotcxx)


# DISPLAY ALL VARIABLES  S.O.9298278
get_cmake_property(_variableNames VARIABLES) 
set(SEARCH_TERM plplot)
list (SORT _variableNames)
foreach (_variableName ${_variableNames})
    unset(MATCHED)
    string(REGEX MATCH ${SEARCH_TERM} MATCHED ${_variableName})
    if (NOT MATCHED)
        continue()
    endif()
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()   