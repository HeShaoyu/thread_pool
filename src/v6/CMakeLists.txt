cmake_minimum_required(VERSION 3.15)
project(test)
add_definitions(-DDEBUG)
add_executable(app test.cpp)