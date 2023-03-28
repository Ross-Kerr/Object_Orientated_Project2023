cmake_minimum_required(VERSION 3.23)
project(Object_Orientated_Project2023)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES main.cpp)

add_executable(Object_Orientated_Project2023_run  ${SOURCE_FILES})


include_directories(project_lib)
add_subdirectory(project_lib)
target_link_libraries(Object_Orientated_Project2023_run project_lib)

add_subdirectory(doctest_tests)