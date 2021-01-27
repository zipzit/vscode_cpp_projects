## More info on using `vcpkg`
 - We're going to be using [vcpkg: a C++ package manager for Windows, Linux, and macOS](https://docs.microsoft.com/en-us/cpp/build/vcpkg).  This simplifies the acquisition and installation of third-party libraries on Windows, Linux, and macOS. 
 - Install vcpkg by making a local clone from its [GitHub repo](https://github.com/Microsoft/vcpkg). Then run the vcpkg-bootstrapper script to set it up.
 - In the vcpkg directory, `$  ./vcpkg search` to see what packages are available.  
 - `$ ./vcpgk install fmt` to install the fmt library.  
 - I initially had a difficult time with CmakeLists.txt content, but received some guidance online.  
 - I will say I don't entirely understand the linker line of code `target_link_libraries(CmakeVcpkg PRIVATE fmt::fmt fmt::fmt-header-only)`   What's up with `fmt::fmt fmt::fmt-header-only` ?  Never seen that before.  Is that an idiosyncrasy of the **fmt** library? is there a reference describing that format?
 - Many thanks to [Syys96 for assistance on this one... ](https://github.com/microsoft/vcpkg/issues/11354#issuecomment-633248199)
 - Oops.  I totally missed this the first time through.  When you run `$ vcpkg install fmt` the system eventually responds with 
 
     `The package fmt:x64-linux provides CMake targets:`
     
     `    find_package(fmt CONFIG REQUIRED)`
     
     `    target_link_libraries(main PRIVATE fmt::fmt fmt::fmt-header-only)`
     
 - Those lines of code get inserted into the CMakeLists.txt file, and thats where the odd `fmt::fmt fmt::fmt-header-only` came from!
 - Additionally when you `$ vcpkg integrate install` the system responds with: 
 
     `    Applied user-wide integration for this vcpkg root.`

     `    CMake projects should use: "-DCMAKE_TOOLCHAIN_FILE=/home/lbc/vcpkg/scripts/buildsystems/vcpkg.cmake"`
     
 - With that last little bit you should create one more entry for the CMakeLists.txt file:  
 
      `     set(CMAKE_TOOLCHAIN_FILE /home/lbc/vcpkg/scripts/buildsystems/vcpkg.cmake)` 
      
      Notice the differences here.  Specifically, remove the `-D` and `=` when creating that `set()` function
      
 - I've run this project multiple times, often with small errors, based on what OS / Virtualbox/ Unix flavor I was working in.  
 Reminder, stick to the basics, particularly with [CMake.](https://github.com/microsoft/vscode-cmake-tools/blob/master/docs/how-to.md#how-to)  Remember the command palette stuff: `CMake: Quick Start` , `CMake: Configure`, `CMake: Build` (or the Build Button in the status bar), `CMake: Debug Target` (or Debug button in the status bar)...
 
 - Note, occasionally I had issues with CMake that didn't make sense. [Clear cache by just deleting the build folder.](https://github.com/microsoft/vcpkg/issues/11247#issuecomment-625688923)  Fixed it!
      
  And when you are done, your **CMakeLists.txt** file should look like: 

     cmake_minimum_required(VERSION 3.12)     
     set(CMAKE_TOOLCHAIN_FILE /home/lbc/vcpkg/scripts/buildsystems/vcpkg.cmake)     
     project(test_cpp)     
     find_package(fmt CONFIG REQUIRED)     
     add_executable(test_cpp main.cpp)     
     target_link_libraries(test_cpp PRIVATE fmt::fmt fmt::fmt-header-only)
     


 
