cmake_minimum_required(VERSION 4.0)
project(SESC)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(SESC "Азбука C++/Hello, world/Classwork/1.cpp"
        "Азбука C++/Hello, world/Classwork/2.cpp"
        "Азбука C++/Hello, world/Classwork/3.cpp"
        "Азбука C++/Hello, world/Homework/1.cpp"
        "Азбука C++/Hello, world/Homework/2.cpp"
        "Азбука C++/Hello, world/DeepThink/1.cpp"
        "Азбука C++/Hello, world/DeepThink/2.cpp")
