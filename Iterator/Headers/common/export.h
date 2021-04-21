
#ifndef ITERATOR_EXPORT_H
#define ITERATOR_EXPORT_H

#ifdef ITERATOR_STATIC_DEFINE
#  define ITERATOR_EXPORT
#  define ITERATOR_NO_EXPORT
#else
#  ifndef ITERATOR_EXPORT
#    ifdef Iterator_EXPORTS
        /* We are building this library */
#      define ITERATOR_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define ITERATOR_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef ITERATOR_NO_EXPORT
#    define ITERATOR_NO_EXPORT 
#  endif
#endif

#ifndef ITERATOR_DEPRECATED
#  define ITERATOR_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef ITERATOR_DEPRECATED_EXPORT
#  define ITERATOR_DEPRECATED_EXPORT ITERATOR_EXPORT ITERATOR_DEPRECATED
#endif

#ifndef ITERATOR_DEPRECATED_NO_EXPORT
#  define ITERATOR_DEPRECATED_NO_EXPORT ITERATOR_NO_EXPORT ITERATOR_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ITERATOR_NO_DEPRECATED
#    define ITERATOR_NO_DEPRECATED
#  endif
#endif

#endif /* ITERATOR_EXPORT_H */
