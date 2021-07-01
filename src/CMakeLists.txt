cmake_minimum_required(VERSION 3.1)
project(hello CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_definitions(-DHELLO_SDK_VERSION="${CMAKE_HELLO_SDK_VERSION}")

add_library(hello hello.cpp)
