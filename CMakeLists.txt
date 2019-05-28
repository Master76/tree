cmake_minimum_required(VERSION 3.10)
project(tree)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(inc)

file(GLOB source_files
  "tree.h"
  "tree.cc"
  "main.cc"
)

add_executable(tree ${source_files})
