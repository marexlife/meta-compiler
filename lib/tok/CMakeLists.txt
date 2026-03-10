cmake_minimum_required(VERSION 3.20)
project(tok)

include(${CMAKE_SOURCE_DIR}/cmake/flags.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME}
    TokFactory.cpp
)

target_link_directories(${PROJECT_NAME} PRIVATE
    ${COMPILER_FLAGS}
)

find_package(absl CONFIG REQUIRED)

target_link_libraries(main PRIVATE absl::any absl::log absl::base absl::bits)