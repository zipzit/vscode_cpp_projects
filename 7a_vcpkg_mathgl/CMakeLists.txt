# https://github.com/microsoft/vcpkg/issues/11354#issuecomment-633248199
# https://cmake.org/cmake/help/latest/manual/cmake-commands.7.html 

cmake_minimum_required(VERSION 3.12) 
set(CMAKE_TOOLCHAIN_FILE /home/lbc/vcpkg/scripts/buildsystems/vcpkg.cmake)
project(mglxxx VERSION 0.1.0)
find_package(mathgl CONFIG REQUIRED)
add_executable(mglxxx main.cpp)
target_link_libraries(mglxxx PRIVATE mgl mgl-static)

# DISPLAY ALL VARIABLES  S.O.9298278
get_cmake_property(_variableNames VARIABLES) 
set(SEARCH_TERM mathgl)
list (SORT _variableNames)
foreach (_variableName ${_variableNames})
    unset(MATCHED)
    string(REGEX MATCH ${SEARCH_TERM} MATCHED ${_variableName})
    if (NOT MATCHED)
        continue() 
    endif()
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()   