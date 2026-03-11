cmake_minimum_required(VERSION 3.20)
project(lex)

include(${CMAKE_SOURCE_DIR}/cmake/flags.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME}
    Lexer.cpp
)

target_link_directories(${PROJECT_NAME} PRIVATE
${COMPILER_FLAGS}
)

find_package(absl CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE 
    absl::any
    absl::log
    absl::base
    absl::bits
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    tok
)