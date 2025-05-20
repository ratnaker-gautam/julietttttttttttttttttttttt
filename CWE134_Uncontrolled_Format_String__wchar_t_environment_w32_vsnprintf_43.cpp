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
 * a a a a a a a a a a a a a a a a a a a a a
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

namespace FOlBqtECDVbmWfAhhvMG
{

#ifndef OMITFUv

static void FUvVaSink(wchar_t * data, ...)
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

static void FUvSource(wchar_t * &data)
{
    {
        /* a a a a a a a a */
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        /* a a a a a a a a */
        if (environment != NULL)
        {
            /* a a a a a a a a */
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}

void FUv()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    FUvSource(data);
    FUvVaSink(data, data);
}

#endif /* a */

#ifndef OMIToHE

/* a a a a a a a */
static void oHEG2BVaSink(wchar_t * data, ...)
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

static void oHEG2BSource(wchar_t * &data)
{
    /* a a a a a a a a a a a a */
    wcscpy(data, L"fixedstringtest");
}

static void oHEG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    oHEG2BSource(data);
    oHEG2BVaSink(data, data);
}

/* a a a a a a a */
static void oHEB2GVaSink(wchar_t * data, ...)
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

static void oHEB2GSource(wchar_t * &data)
{
    {
        /* a a a a a a a a */
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        /* a a a a a a a a */
        if (environment != NULL)
        {
            /* a a a a a a a a */
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}

static void oHEB2G()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    oHEB2GSource(data);
    oHEB2GVaSink(data, data);
}

void oHE()
{
    oHEG2B();
    oHEB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace FOlBqtECDVbmWfAhhvMG; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMIToHE
    printLine("Calling oHE()...");
    oHE();
    printLine("Finished oHE()");
#endif /* a */
#ifndef OMITFUv
    printLine("Calling FUv()...");
    FUv();
    printLine("Finished FUv()");
#endif /* a */
    return 0;
}

#endif
