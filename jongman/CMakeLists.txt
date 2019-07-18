cmake_minimum_required(VERSION 3.12)
project(jongman)

set(CMAKE_CXX_STANDARD 14)

add_executable(jongman main.cpp cmake-build-debug/poly.cpp numberGame.cpp)