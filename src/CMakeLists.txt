cmake_minimum_required(VERSION 3.10)

project(abseilExample)

# Abseil requires C++14
set(CMAKE_CXX_STANDARD 17)

include(GenerateExportHeader)
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

execute_process(
    COMMAND R --slave -e "cat(.libPaths(), \"/abseil/include\", sep = \"\")"
    OUTPUT_VARIABLE ABSL_PATH
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

add_subdirectory(${ABSL_PATH} abseil-cpp)

add_library(statusReturn SHARED statusReturn.cc)
generate_export_header(statusReturn)

target_link_libraries(statusReturn absl::status)

install(TARGETS statusReturn DESTINATION lib)
