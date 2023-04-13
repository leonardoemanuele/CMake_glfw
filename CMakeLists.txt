cmake_minimum_required(VERSION 3.24.0)

project(ProjectName)

add_executable(${PROJECT_NAME} main.cpp)

#Adding a subdirectory

add_subdirectory(Adder)

target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_directories(${PROJECT_NAME} PRIVATE Adder)

target_link_libraries(${PROJECT_NAME} adder)