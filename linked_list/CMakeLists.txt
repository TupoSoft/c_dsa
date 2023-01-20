cmake_minimum_required(VERSION 3.23)
set(CMAKE_C_STANDARD 23)

add_library(linked_list src/linked_list.c)
target_include_directories(linked_list PUBLIC include)
