add_executable("CreateIteratorTester" "CreateIterator.c")
target_link_libraries("CreateIteratorTester" PRIVATE Iterator::iterator)

# Arguments: start, end, step, size, array_size
add_test(
    NAME    "CreateIterator_Test_01"
    COMMAND "CreateIteratorTester" "0" "10" "1" "4" "0"
)
add_test(
    NAME    "CreateIterator_Test_02"
    COMMAND "CreateIteratorTester" "5" "100" "7" "8" "128"
)

add_executable("IterateTester" "Iterate.c")
target_link_libraries("IterateTester" PRIVATE Iterator::iterator)

# Arguments: start, end, step, size, array_size
add_test(
    NAME    "Iterate_Test_01"
    COMMAND "IterateTester" "0" "10" "1" "4" "0"
)
add_test(
    NAME    "Iterate_Test_02"
    COMMAND "IterateTester" "0" "10" "1" "4" "10"
)
add_test(
    NAME    "Iterate_Test_03"
    COMMAND "IterateTester" "5" "20" "3" "4" "20"
)
