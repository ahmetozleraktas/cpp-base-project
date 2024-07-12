cmake_minimum_required(VERSION 3.10)

# Get the base name of the workspace folder
get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

# Set the project name
project(${PROJECT_NAME})

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add an executable
add_executable(${PROJECT_NAME} src/main.cpp)
