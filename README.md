# vscode_cpp_projects
Run C++ Code on VS Code on Linux

The goal here is to run C++ programs on a Linux box using Visual Studio Code, including the ability to debug / step through code.  These samples show a progression of making this work. 

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


## 1_cpp_helloworld
 - Keep it simple. 
 - Simple gcc compilation, generated via C/C++ Extension tools
 - Simple gdb debugging
 
## 2_cmake_helloworld
 - Same simple program
 - Use Cmake via CMakeLists.txt
 - Use LLDB for debugging
 
## 3_cmake_simple_include
 - Introduce a simple class structure with seperate header file
