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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITRZr

#include <stdarg.h>
#include "std_testcase.h"
#include "RJLJQIueFJVOsiKVqOZj__wchar_t_environment_w32_vsnprintf_83.h"

#define ENV_VARIABLE L"ADD"

#ifdef _WIN32
#define GETENV _wgetenv
#else
#define GETENV getenv
#endif

namespace RJLJQIueFJVOsiKVqOZj__wchar_t_environment_w32_vsnprintf_83
{
XJoadpPNhfKNtCiQnQwv::XJoadpPNhfKNtCiQnQwv(wchar_t * dataCopy)
{
    data = dataCopy;
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

static void RZrVaSink(wchar_t * data, ...)
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

XJoadpPNhfKNtCiQnQwv::~XJoadpPNhfKNtCiQnQwv()
{
    RZrVaSink(data, data);
}
}
#endif /* a */
