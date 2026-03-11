cmake_minimum_required(VERSION 3.20)
project(lex_tests)

include(${PROJECT_NAME}/cmake/flags.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    main.cpp
    Tester.cpp
)

target_link_options(${PROJECT_NAME} PRIVATE
    ${COMPILER_FLAGS}
)

include(${PROJECT_NAME}/tests/tests.cmake)


