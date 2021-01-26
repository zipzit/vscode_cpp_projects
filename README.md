# vscode_cpp_projects
Run C++ Code on VS Code on Linux

The goal here is to run C++ programs on a Linux box using Visual Studio Code, including the ability to debug / step through code.  These samples show a progression of making this work.    Please note, this is a work in progress... I'm trying to learn this stuff... been awhile since I've really used C/C++ for anything.  I'm sure there are plenty of errors (opportunities for improvement) here.  Feel free to raise [an issue!](https://github.com/zipzit/vscode_cpp_projects/issues)


## 1_cpp_helloworld
 - Keep it simple. 
 - Simple gcc compilation, generated via C/C++ Extension tools
 - Simple gdb debugging
 
## 2_cmake_helloworld
 - Same simple program
 - Use Cmake via CMakeLists.txt
 - Use LLDB for debugging
 
## 3_cmake_simple_include
 - Introduce a simple class structure with separate header file
 
## 4_cmake_template_class
 - No compilation lessons here...
 - I wanted to understand how template functions worked
 
## 5_cmake_vcpkg
 - We're using vcpkg, a package manager for C++ libraries.  Its an impressive setup.
 - This simple sample uses **fmt** just so we can easily test the process of using a vcpkg library.  I will say, **fmt** is not a library I'd typically use;  it seemed short and concise enough to learn how to use **vcpkg**.
 - See [5_cmake_vcpkg folder](https://github.com/zipzit/vscode_cpp_projects/tree/master/5_cmake_vcpkg) for more details. 

## 6_cmake_opencv_intro
 - OpenCV compiled and installed manually from github source
 - Works well.  
 
 ## Tools

Laptop:

     $ hostnamectl 
     
     Operating System: Ubuntu 20.04 LTS
     
     Kernel: Linux 5.4.0-31-generic
     
     Architecture: x86-64`
     
Visual Studio Code: 

     Version: 1.45.1
     
VS Code Enabled Extensions:

    C/C++ (Microsoft)
    
    Cmake (twxs)
    
    Cmake Tools (Microsoft)
    
    CodeLLDB (Vadim Chuganov)

c++ info

     $ c++ -v
     Using built-in specs.
     COLLECT_GCC=c++
     COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/9/lto-wrapper
     OFFLOAD_TARGET_NAMES=nvptx-none:hsa
     OFFLOAD_TARGET_DEFAULT=1
     Target: x86_64-linux-gnu
     Thread model: posix
     gcc version 9.3.0 (Ubuntu 9.3.0-10ubuntu2) 
     
     $ cpp -v
     Using built-in specs.
     COLLECT_GCC=cpp
     OFFLOAD_TARGET_NAMES=nvptx-none:hsa
     OFFLOAD_TARGET_DEFAULT=1
     Target: x86_64-linux-gnu
     Thread model: posix
     gcc version 9.3.0 (Ubuntu 9.3.0-10ubuntu2)

     $ gcc -v
     Using built-in specs.
     COLLECT_GCC=gcc
     COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/9/lto-wrapper
     OFFLOAD_TARGET_NAMES=nvptx-none:hsa
     OFFLOAD_TARGET_DEFAULT=1
     Target: x86_64-linux-gnu
     Thread model: posix
     gcc version 9.3.0 (Ubuntu 9.3.0-10ubuntu2) 

Thoughts:  What about running [C++ in the command line on Windows?](https://docs.microsoft.com/en-us/cpp/build/walkthrough-compiling-a-native-cpp-program-on-the-command-line?view=msvc-160) 

