cmake_minimum_required(VERSION 3.1)

project(calc)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O2 -Wall")

add_executable(calc
  main.cpp
  calc.cpp
)
