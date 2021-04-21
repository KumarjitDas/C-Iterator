#ifndef ITERATOR_common_types_h
#define ITERATOR_common_types_h

#include "standard_includes.h"

struct IteratorIterator
{
    uint32_t  iterate_count,
              current_step,
              step,
              step_size,
              end;
    void     *pointer;
};

typedef struct IteratorIterator Iterator_t;

#endif  // ITERATOR_common_types_h
