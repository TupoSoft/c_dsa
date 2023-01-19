cmake_minimum_required(VERSION 3.23)
project(linked_list C)

set(CMAKE_C_STANDARD 23)

add_library(linked_list linked_list.c)

add_executable(create_print_destroy tests/create_print_destroy.c)
target_link_libraries(create_print_destroy linked_list)
add_test(NAME create_print_destroy COMMAND create_print_destroy)
set_property(TEST create_print_destroy PROPERTY PASS_REGULAR_EXPRESSION passRegex "^1 -> 2 -> 3 ->")

add_executable(delete_node_check_size tests/delete_node_check_size.c)
target_link_libraries(delete_node_check_size linked_list)
add_test(NAME delete_node_check_size COMMAND delete_node_check_size)
set_property(TEST delete_node_check_size PROPERTY PASS_REGULAR_EXPRESSION passRegex "^2")

enable_testing()
