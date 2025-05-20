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
 * a a a a a a a a a a a a a a a a a a a a a a a a a a a
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

#ifndef OMITerz

static void erzVaSink(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vwprintf(data, args);
        va_end(args);
    }
}

void cjclygrBVgaUbApBCsGU_erzSink(wchar_t * data)
{
    erzVaSink(data, data);
}

#endif /* a */

#ifndef OMITvui

/* a a a a a a a */
static void vuiG2BVaSink(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vwprintf(data, args);
        va_end(args);
    }
}

void cjclygrBVgaUbApBCsGU_vuiG2BSink(wchar_t * data)
{
    vuiG2BVaSink(data, data);
}

/* a a a a a a a */
static void vuiB2GVaSink(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vwprintf(L"%s", args);
        va_end(args);
    }
}

void cjclygrBVgaUbApBCsGU_vuiB2GSink(wchar_t * data)
{
    vuiB2GVaSink(data, data);
}

#endif /* a */
