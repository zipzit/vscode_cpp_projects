cmake_minimum_required(VERSION 3.0.0)
project(CmakeTemplate VERSION 0.1.0)

include(CTest)
enable_testing()

# https://cliutils.gitlab.io/modern-cmake/chapters/basics/example.html
# https://gitlab.com/CLIUtils/modern-cmake/-/blob/master/examples/simple-project/CMakeLists.txt
# This is a "default" library, and will match the *** variable setting.
# Other common choices are STATIC, SHARED, and MODULE
# Including header files here helps IDEs but is not required.
# Output libname matches target name, with the usual extensions on your system
#add_library(MyLibExample template_array.cpp)

add_executable(CmakeTemplateTester main.cpp)

# Make sure you link your targets with this command. It can also link libraries and
# even flags, so linking a target that does not exist will not give a configure-time error.
#target_link_libraries(CmakeTemplateTester PRIVATE MyLibExample)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)


