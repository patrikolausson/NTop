#ifndef UTIL_H
#define UTIL_H

#include <tchar.h>

#ifdef _MSC_VER
	#define NORETURN __declspec(noreturn)
#elif defined(__GNUC__) && defined(__MINGW32__)
	#define NORETURN __attribute__((noreturn))
#else
	#define NORETURN
#endif

NORETURN void Die(TCHAR *Fmt, ...);
void *xmalloc(size_t size);
void *xrealloc(void *ptr, size_t size);

#endif