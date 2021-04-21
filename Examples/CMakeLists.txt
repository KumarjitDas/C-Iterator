add_executable("example_01" "example_01.c")
target_link_libraries("example_01" PRIVATE Iterator::iterator)

add_executable("example_02" "example_02.c")
target_link_libraries("example_02" PRIVATE Iterator::iterator)
