cmake_minimum_required(VERSION 3.20)
project(lex_tests)

include(${CMAKE_SOURCE_DIR}/cmake/flags.cmake)
include(${CMAKE_SOURCE_DIR}/tests/tests.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    main.cpp
    TestClass.cpp
)

target_link_options(${PROJECT_NAME} PRIVATE
    ${COMPILER_FLAGS}
)


test_function(${PROJECT_NAME})

