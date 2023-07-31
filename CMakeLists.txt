cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
message("C++ Standard: ${CMAKE_CXX_STANDARD}")

message("CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
project(namsakaram)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
message("CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
message("CMAKE_INSTALL_LIBDIR ${CMAKE_INSTAL_LIBDIR}")

add_subdirectory(external)
#add_subdirectory(top)
include_directories("external")

set(SOURCES ${PROJECT_SOURCE_DIR}/top/toplevel.cpp)
add_executable(kurchi ${SOURCES})

target_link_libraries(kurchi PRIVATE fmt::fmt)