# https://github.com/microsoft/vcpkg/issues/11354#issuecomment-633248199
# https://cmake.org/cmake/help/latest/manual/cmake-commands.7.html 
# https://code.visualstudio.com/docs/cpp/cmake-linux
# Generate CMakeLists using the VScode CMake Extension, then modify it 
# per instructions from VCPKG = Fail every time.  
# Not sure why.  

cmake_minimum_required(VERSION 3.0.0)
project(RayLib_Test VERSION 0.1.0)

set(CMAKE_TOOLCHAIN_FILE /home/vagrant/Desktop/vcpkg/scripts/buildsystems/vcpkg.cmake)

include(CTest)
enable_testing()

add_executable(RayLib_Test main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(raylib CONFIG REQUIRED)           
target_include_directories(RayLib_Test PRIVATE ${RAYLIB_INCLUDE_DIRS})
target_link_libraries(RayLib_Test PRIVATE ${RAYLIB_LIBRARIES})

# DISPLAY ALL VARIABLES  S.O.9298278
get_cmake_property(_variableNames VARIABLES) 
set(SEARCH_TERM physac)
list (SORT _variableNames)
foreach (_variableName ${_variableNames})
    unset(MATCHED)
    string(REGEX MATCH ${SEARCH_TERM} MATCHED ${_variableName})
    if (NOT MATCHED)
        continue()
    endif()
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()   


