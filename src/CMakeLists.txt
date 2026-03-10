cmake_minimum_required(VERSION 3.20)
project(marex)

include(${CMAKE_SOURCE_DIR}/cmake/flags.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_directories(${PROJECT_NAME} PRIVATE
    ${COMPILER_FLAGS}
)
