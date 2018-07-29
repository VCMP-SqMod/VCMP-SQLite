#pragma once

#if defined(_MSC_VER)
	#define SQMOD_API_EXPORT	extern "C" __declspec(dllexport)
#elif defined(__GNUC__)
	#define SQMOD_API_EXPORT	extern "C"
#endif

#include <vcmp.h>
#include <squirrel.h>

#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// A definition needed for Squirrel's print function
#ifdef SQUNICODE
	#define scvprintf vwprintf
#else
	#define scvprintf vprintf
#endif

void OutputDebug      ( const char * msg );
void OutputMessage    ( const char * msg );
