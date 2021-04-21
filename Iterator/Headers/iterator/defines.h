#ifndef ITERATOR_iterator_defines_h
#define ITERATOR_iterator_defines_h

#define ITERATE(iterator) while (Iterate(&iterator))

#define GET_ITERATOR_VALUE(Type, iterator)  (*(Type*)iterator.pointer)
#define GET_ITERATOR_COUNT(iterator)        (iterator.iterate_count)
#define GET_ITERATOR_STEP(iterator)         (iterator.current_step)

#endif  // ITERATOR_iterator_defines_h
