#include "iterator/iterator.h"

void CreateIterator(Iterator_t     *iterator,
                    uint32_t const  start,
                    uint32_t const  end,
                    uint32_t const  step,
                    void           *array,
                    uint32_t const  size
                   )
{
    iterator->iterate_count = 0;
    iterator->current_step  = start - step;
    iterator->step          = step;
    iterator->step_size     = step * size;
    iterator->end           = end;
    iterator->pointer       = array ?
                              (uint8_t*)array + (start * size) - iterator->step_size :
                              NULL;
}

_Bool Iterate(Iterator_t *iterator)
{
    iterator->iterate_count++;
    iterator->current_step += iterator->step;

    if (iterator->pointer)
        iterator->pointer += (size_t)iterator->step_size;

    if (iterator->current_step >= iterator->end)
        return FALSE;

    return TRUE;
}
