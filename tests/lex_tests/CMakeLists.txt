cmake_minimum_required(VERSION 3.20)
project(lex_tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    main.cpp
    Tester.cpp
)

enable_testing()

find_package(GTest CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE 
    GTest::gtest 
    GTest::gtest_main
    GTest::gmock
    GTest::gmock_main
)

add_test(AllTestsInMain ${PROJECT_NAME})