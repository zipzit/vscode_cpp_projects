cmake_minimum_required(VERSION 3.0.0)
project(CmakeWithLibrary VERSION 0.1.0)

add_library(message STATIC Message.cpp Message.hpp)

add_executable(hello-world hello-world.cpp)

# Make sure you link your targets with this command. It can also link libraries and
# even flags, so linking a target that does not exist will not give a configure-time error.
target_link_libraries(hello-world message)


