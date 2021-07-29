Using CMake to build a C++ object
======================================
# Process
> + mkdir build
> + cd build
> + cmake ..
> + make 

# CMake file
>+ build a CMake
    - cmake_minimum_required( VERSION) 
        - check by using：  cmake --version  
    
    - project Project name)
    
    - set(CMAKE_CXX_STANDARD 14 ) 
        - 14 is the version of cmake
    
    - set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

    - add_library()

    - add_executable

    -target_link_libraries()
    