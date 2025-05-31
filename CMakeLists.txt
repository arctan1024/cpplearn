cmake_minimum_required (VERSION 3.5...3.13)

project (cpplearn)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (cpplearn ${source_files})
