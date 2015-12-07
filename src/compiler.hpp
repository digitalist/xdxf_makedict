#ifndef _MAKEDICT_COMPILER_HPP_
#define _MAKEDICT_COMPILER_HPP_

#if defined(__GNUC__) && defined(__GNUC_MINOR__)
#  define GNUC_PREREQ(maj,min) \
	((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#else
#  define GNUC_PREREQ(maj,min) 0
#endif

/* Does this compiler support unused result checking? */
#if GNUC_PREREQ(3,4)
#  define ATTRIBUTE_WARN_UNUSED_RESULT __attribute__ ((__warn_unused_result__))
#else
#  define ATTRIBUTE_WARN_UNUSED_RESULT /**/
#endif
#if __cplusplus > 199711L
#define XDXF_UNIQ_POINTER std::unique_ptr
#else
#define XDXF_UNIQ_POINTER std::auto_ptr
#endif
#endif//!_MAKEDICT_COMPILER_HPP_

