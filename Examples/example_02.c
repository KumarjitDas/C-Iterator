#include "iterator/iterator.h"

#include <stdio.h>

int main()
{
    int array[] = {01, 23, 45, 67, 89, 11, 22, 33, 44, 55, 66, 77, 88, 99};

    Iterator_t iterator;
    CreateIterator(&iterator, 5, sizeof(array) / sizeof(int), 2, array, sizeof(int));

    ITERATE(iterator)
        printf("%3u:%3u -> %d\n",
               GET_ITERATOR_COUNT(iterator),
               GET_ITERATOR_STEP(iterator),
               GET_ITERATOR_VALUE(int, iterator)
              );

    return 0;
}
