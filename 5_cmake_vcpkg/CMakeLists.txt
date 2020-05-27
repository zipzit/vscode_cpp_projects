cmake_minimum_required(VERSION 3.0.0)
project(CmakeVcpkg VERSION 0.1.0)

include(CTest)
enable_testing()

# https://cliutils.gitlab.io/modern-cmake/chapters/basics/example.html
# https://gitlab.com/CLIUtils/modern-cmake/-/blob/master/examples/simple-project/CMakeLists.txt
# This is a "default" library, and will match the *** variable setting.
# Other common choices are STATIC, SHARED, and MODULE
# Including header files here helps IDEs but is not required.
# Output libname matches target name, with the usual extensions on your system

set(CMAKE_TOOLCHAIN_FILE "/home/lbc/vcpkg/scripts/buildsystems/vcpkg.cmake")

# Figure this next location out via error msgs, search for fmt-config.cmake 
# set(FMT_CONFIG_PATH "/home/lbc/vcpkg/installed/x64-linux/share/fmt/")  
set(FMT_CONFIG_PATH "/home/lbc/vcpkg/packages/fmt_x64-linux/share/fmt")
# find_package(fmt REQUIRED PATHS ${FMT_CONFIG_PATH})  

set(FMT_INCLUDE_DIRECTORIES "/home/lbc/vcpkg/packages/fmt_x64-linux/include/")
# include_directories(${fmt_DIR})  total fail...
# THE STUFF WE NEED IS LOCATED AT ~/vcpkg/installed/x64-linux/lib/pkgconfig/fmt.pc
include_directories(${FMT_INCLUDE_DIRECTORIES})

add_executable(CmakeVcpkg main.cpp)

# Make sure you link your targets with this command. It can also link libraries and
# even flags, so linking a target that does not exist will not give a configure-time error. 
set(FMT_LIBRARY_DIRECTORY "/home/lbc/vcpkg/packages/fmt_x64-linux/lib")
# target_link_libraries(CmakeVcpkg ${FMT_LIBRARY_DIRECTORY})  # ?H.  Apparently not required?

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# # DISPLAY ALL VARIABLES
# # Upon reflection, most of this stuff is listed in CmakeCashe.txt file in the build folder
# get_cmake_property(_variableNames VARIABLES)
# list (SORT _variableNames)
# foreach (_variableName ${_variableNames})
#    message(STATUS "${_variableName}=${${_variableName}}")
# endforeach()


# [cmake] -- fmt_CONFIG=/home/lbc/vcpkg/installed/x64-linux/share/fmt/fmt-config.cmake
# [cmake] -- fmt_CONSIDERED_CONFIGS=/home/lbc/vcpkg/installed/x64-linux/share/fmt/fmt-config.cmake
# [cmake] -- fmt_CONSIDERED_VERSIONS=6.2.0
# [cmake] -- fmt_DIR=/home/lbc/vcpkg/installed/x64-linux/share/fmt
# [cmake] -- fmt_FOUND=1
# [cmake] -- fmt_VERSION=6.2.0
# [cmake] -- fmt_VERSION_COUNT=3
# [cmake] -- fmt_VERSION_MAJOR=6
# [cmake] -- fmt_VERSION_MINOR=2
# [cmake] -- fmt_VERSION_PATCH=0
# [cmake] -- fmt_VERSION_TWEAK=0

message("vcpkgRoot = ${vcpkgRoot}")