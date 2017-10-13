cmake_minimum_required(VERSION 3.7)
project(stack)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MyStack.h Convert.h Parentheses.h)
add_executable(stack ${SOURCE_FILES})