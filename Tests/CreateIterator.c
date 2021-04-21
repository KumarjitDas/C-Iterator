#define ITERATOR_TESTING_ENABLED

#include "common/defines.h"
#include "iterator/iterator.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc <= 5)
        return ITERATOR_TEST_FAILED;

    uint32_t  start      = (uint32_t)strtoul(argv[1], NULL, 10);
    uint32_t  end        = (uint32_t)strtoul(argv[2], NULL, 10);
    uint32_t  step       = (uint32_t)strtoul(argv[3], NULL, 10);
    uint32_t  size       = (uint32_t)strtoul(argv[4], NULL, 10);
    uint32_t  array_size = (uint32_t)strtoul(argv[5], NULL, 10);
    int      *array      = NULL;

    if (array_size > 0) {
        array = malloc(array_size);
        if (!array) 
            return ITERATOR_TEST_FAILED;
    }

    Iterator_t iterator;

    CreateIterator(&iterator, start, end, step, array, size);

    _Bool test_result  = iterator.iterate_count == 0;
    test_result       &= iterator.current_step  == start - step;
    test_result       &= iterator.step          == step;
    test_result       &= iterator.step_size     == step * size;
    test_result       &= iterator.end           == end;
    if (array_size == 0)
        test_result &= iterator.pointer == NULL;
    else
        test_result &= ((uint8_t*)(iterator.pointer) ==
                        (uint8_t*)array + (start * size) - (step * size)
                       );

    if (array)
        free(array);

    return !test_result;
}
