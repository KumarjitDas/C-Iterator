#include "iterator/iterator.h"

#include <stdio.h>

int main()
{
    Iterator_t iterator;
    CreateIterator(&iterator, 0, 100, 7, NULL, 1);

    ITERATE(iterator)
        printf("%3u:%3u\n",
               GET_ITERATOR_COUNT(iterator),
               GET_ITERATOR_STEP(iterator)
              );

    return 0;
}
