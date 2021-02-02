# https://github.com/microsoft/vcpkg/issues/14286
# https://github.com/microsoft/vcpkg/issues/11354#issuecomment-633248199
# https://cmake.org/cmake/help/latest/manual/cmake-commands.7.html 

cmake_minimum_required(VERSION 3.0.0)
project(Math_GL_Project VERSION 0.1.0)

include(CTest)
enable_testing()

# Applied user-wide integration for this vcpkg root.
set(CMAKE_TOOLCHAIN_FILE "/home/vagrant/Desktop/vcpkg/scripts/buildsystems/vcpkg.cmake")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# The package mathgl:x64-linux provides CMake targets:
find_package(mathgl CONFIG REQUIRED)
target_link_libraries(Math_GL_Project  PRIVATE mgl mgl-static)

add_executable(Math_GL_Project main.cpp)

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