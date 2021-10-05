cmake_minimum_required(VERSION 3.14..3.18)

project(srt C)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)