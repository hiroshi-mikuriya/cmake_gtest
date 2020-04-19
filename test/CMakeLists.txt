cmake_minimum_required(VERSION 3.1)

project(test)

set(ROOT ..)
set(SRC_DIR ${ROOT}/src)
set(TEST_DIR ${ROOT}/test)
set(GTEST_DIR ${TEST_DIR}/gtest)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O2 -Wall")

add_subdirectory(${GTEST_DIR})

add_executable(test_calc
  ${TEST_DIR}/main.cpp
  ${TEST_DIR}/test_calc.cpp
  ${SRC_DIR}/calc.cpp)
target_link_libraries(test_calc
  gtest_main
  pthread)
target_include_directories(test_calc PUBLIC
  ${SRC_DIR}
  ${GTEST_DIR}/googletest/include)