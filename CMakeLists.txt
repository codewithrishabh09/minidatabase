cmake_minimum_required(VERSION 3.20)

project(MiniDatabase
    VERSION 0.1.0
    DESCRIPTION "A lightweight relational database engine written in C++"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(minidatabase
    src/main.cpp
)

target_include_directories(minidatabase
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(minidatabase
        PRIVATE
            -Wall
            -Wextra
            -Wpedantic
    )
endif()