cmake_minimum_required(VERSION 3.12)
project(week2)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
add_executable(week2 main.cpp test/calculator.cpp test/calculator.h test/test.cpp)
target_link_libraries(week2 gtest gtest_main)
