cmake_minimum_required(VERSION 3.1)

project(calc)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O2 -Wall")

file(GLOB SOURCES
  *.cpp
)

add_executable(${PROJECT_NAME}
  ${SOURCES}
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    ${CMAKE_THREAD_LIBS_INIT}
)
