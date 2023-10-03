cmake_minimum_required(VERSION 3.10)

project(abseilExample)

# Abseil requires C++14
set(CMAKE_CXX_STANDARD 17)

include(GenerateExportHeader)
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

add_subdirectory(src/abseil-cpp)

add_library(statusReturn SHARED src/statusReturn.cc)
generate_export_header(statusReturn)

target_link_libraries(statusReturn absl::status)

install(TARGETS statusReturn DESTINATION lib)
