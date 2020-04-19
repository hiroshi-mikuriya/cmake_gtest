cmake_minimum_required(VERSION 3.1)

project(test_calc)

set(ROOT ..)
set(SRC_DIR ${ROOT}/src)
set(TEST_DIR ${ROOT}/test)
set(GTEST_DIR ${TEST_DIR}/gtest)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O2 -Wall")

add_subdirectory(${GTEST_DIR})

file(GLOB SOURCES
  ${TEST_DIR}/*.cpp
  ${SRC_DIR}/calc.cpp
)

add_executable(${PROJECT_NAME}
  ${SOURCES}
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    gtest_main
    ${CMAKE_THREAD_LIBS_INIT}
)

target_include_directories(${PROJECT_NAME}
  PRIVATE
    ${SRC_DIR}
    ${GTEST_DIR}/googletest/include
)