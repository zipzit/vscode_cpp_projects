# https://thecodinginterface.com/blog/opencv-cpp-vscode/
# https://stackoverflow.com/questions/37336667/set-opencv-path-for-a-c-project-using-cmake
# https://cmake.org/cmake/help/latest/manual/cmake-commands.7.html

cmake_minimum_required(VERSION 3.0.0)

# name of this example project
project(Cmake_OpenCV_Intro VERSION 0.1.0)

include(CTest)
enable_testing()

# set OpenCV_DIR variable equal to the path to the cmake
# files within the previously installed opencv program
set(OpenCV_DIR "~/opencv/build")   
find_package(OpenCV REQUIRED PATHS ${OpenCV_DIR})
message(NOTICE "Package info: ${OpenCV_DIR}" )

# --- or simply ---
# find_package(OpenCV REQUIRED PATHS "~/opencv/build")

include_directories(${OpenCV_INCLUDE_DIRS}) 

add_executable(Cmake_OpenCV_Intro main.cpp)

# Make sure you link your targets with this next command. It can also link libraries and
# even flags, so linking a target that does not exist will not give a configure-time error.
target_link_libraries(Cmake_OpenCV_Intro ${OpenCV_LIBS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# # DISPLAY ALL VARIABLES
# get_cmake_property(_variableNames VARIABLES)
# list (SORT _variableNames)
# foreach (_variableName ${_variableNames})
#     message(STATUS "${_variableName}=${${_variableName}}")
# endforeach()


