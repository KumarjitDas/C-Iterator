#ifndef ITERATOR_iterator_iterator_h
#define ITERATOR_iterator_iterator_h

#include "common/export.h"
#include "common/defines.h"
#include "common/standard_includes.h"
#include "common/types.h"
#include "defines.h"

void ITERATOR_EXPORT CreateIterator(Iterator_t     *iterator,
                                    uint32_t const  start,
                                    uint32_t const  end,
                                    uint32_t const  step,
                                    void           *array,
                                    uint32_t const  size
                                   );

_Bool ITERATOR_EXPORT Iterate(Iterator_t *iterator);

#endif  // ITERATOR_iterator_iterator_h
