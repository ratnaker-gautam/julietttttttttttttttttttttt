/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a
 *
 * */

#include <stdarg.h>
#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#define ENV_VARIABLE L"ADD"

#ifdef _WIN32
#define GETENV _wgetenv
#else
#define GETENV getenv
#endif

#ifndef OMITPUl

static void PUlVaSink(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        _vsnwprintf(dest, 100-1, data, args);
        va_end(args);
        printWLine(dest);
    }
}

void bWGrwFFzUFlibXPhHNOm_PUlSink(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    PUlVaSink(data, data);
}

#endif /* a */

#ifndef OMITOTo

/* a a a a a a a */
static void OToG2BVaSink(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        _vsnwprintf(dest, 100-1, data, args);
        va_end(args);
        printWLine(dest);
    }
}

void bWGrwFFzUFlibXPhHNOm_OToG2BSink(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    OToG2BVaSink(data, data);
}

/* a a a a a a a */
static void OToB2GVaSink(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        _vsnwprintf(dest, 100-1, L"%s", args);
        va_end(args);
        printWLine(dest);
    }
}

void bWGrwFFzUFlibXPhHNOm_OToB2GSink(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    OToB2GVaSink(data, data);
}

#endif /* a */
