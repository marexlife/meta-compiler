cmake_minimum_required(VERSION 3.20)
project(stl)

add_library(${PROJECT_NAME})

target_precompile_headers(${PROJECT_NAME} PUBLIC
    stl.pch
)