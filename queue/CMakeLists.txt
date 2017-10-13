cmake_minimum_required(VERSION 3.7)
project(queue)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MyQueue.h MyQueue.cpp)
add_executable(queue ${SOURCE_FILES})