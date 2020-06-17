/*! \file */
/*******************************************
 *                                         *
 *  File auto-generated by `::safer_ffi`.  *
 *                                         *
 *  Do not manually edit this file.        *
 *                                         *
 *******************************************/

#ifndef __RUST_FFI_TESTS__
#define __RUST_FFI_TESTS__

#ifdef __cplusplus
extern "C" {
#endif


#include <stddef.h>
#include <stdint.h>

/** \remark Has the same ABI as `uint8_t` **/
#ifdef DOXYGEN
typedef enum Bar
#else
typedef uint8_t Bar_t; enum
#endif
{
    /** . */
    BAR_A,
}
#ifdef DOXYGEN
Bar_t
#endif
;

void check_bar (
    Bar_t _bar);

/** \brief
 *  Concatenate the two input strings into a new one.
 * 
 *  The returned string must be freed using `free_char_p`.
 */
char * concat (
    char const * fst,
    char const * snd);

/** \brief
 *  Frees a string created by `concat`.
 */
void free_char_p (
    char * _string);

typedef struct {

    void * env_ptr;

    void (*call)(void *, char const *);

} RefDynFnMut1_void_char_const_ptr_t;

/** \brief
 *  Same as `concat`, but with a callback-based API to auto-free the created
 *  string.
 */
void with_concat (
    char const * fst,
    char const * snd,
    RefDynFnMut1_void_char_const_ptr_t cb);

/** \brief
 *  `&'lt [T]` but with a guaranteed `#[repr(C)]` layout.
 * 
 *  # C layout (for some given type T)
 * 
 *  ```c
 *  typedef struct {
 *      // Cannot be NULL
 *      T * ptr;
 *      size_t len;
 *  } slice_T;
 *  ```
 * 
 *  # Nullable pointer?
 * 
 *  If you want to support the above typedef, but where the `ptr` field is
 *  allowed to be `NULL` (with the contents of `len` then being undefined)
 *  use the `Option< slice_ptr<_> >` type.
 */
typedef struct {

    /** \brief
     *  Pointer to the first element (if any).
     */
    int32_t const * ptr;

    /** \brief
     *  Element count
     */
    size_t len;

} slice_ref_int32_t;

/** \brief
 *  Returns a pointer to the maximum integer of the input slice, or `NULL` if
 *  it is empty.
 */
int32_t const * max (
    slice_ref_int32_t xs);


#define FOO ((int32_t) (42))

typedef struct foo foo_t;

foo_t * new_foo (void);

int32_t read_foo (
    foo_t const * foo);

void free_foo (
    foo_t * foo);

/** \brief
 *  This is a `#[repr(C)]` enum, which leads to a classic enum def.
 */
typedef enum SomeReprCEnum {
    /** \brief
     *  This is some variant.
     */
    SOME_REPR_C_ENUM_SOME_VARIANT,
} SomeReprCEnum_t;

void check_SomeReprCEnum (
    SomeReprCEnum_t _baz);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __RUST_FFI_TESTS__ */
