#ifndef ITERATOR_common_defines_h
#define ITERATOR_common_defines_h

#define ITERATOR_DEFINED_struct_IteratorIterator
#define ITERATOR_DEFINED_Iterator_t

#define ITERATOR_DEFINED_CreateIterator
#define ITERATOR_DEFINED_Iterate

#ifndef TRUE
#   define TRUE     (_Bool)(1)
#endif
#ifndef FALSE
#   define FALSE    (_Bool)(0)
#endif

#ifdef ITERATOR_TESTING_ENABLED
#   ifndef ITERATOR_TEST_FAILED
#      define ITERATOR_TEST_FAILED      (_Bool)(1)
#   endif
#   ifndef ITERATOR_TEST_SUCCEEDED
#      define ITERATOR_TEST_SUCCEEDED   (_Bool)(0)
#   endif
#endif  // ITERATOR_TESTING_ENABLED

#endif  // ITERATOR_common_defines_h
