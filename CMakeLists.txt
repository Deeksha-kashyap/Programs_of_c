cmake_minimum_required(VERSION 3.14)
project(Programs_of_c C)

set(CMAKE_C_STANDARD 11)

add_executable(Programs_of_c main.c cmake-build-debug/program.c cmake-build-debug/program.h)