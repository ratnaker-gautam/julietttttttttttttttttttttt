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
#ifndef OMIThwn

#include <stdarg.h>
#include "std_testcase.h"
#include "MTVzhSnrItJBSQgFnYLe__char_environment_w32_vsnprintf_83.h"

#define ENV_VARIABLE "ADD"

#ifdef _WIN32
#define GETENV getenv
#else
#define GETENV getenv
#endif

namespace MTVzhSnrItJBSQgFnYLe__char_environment_w32_vsnprintf_83
{
lcKHKjhbZZgimIQjjgCk::lcKHKjhbZZgimIQjjgCk(char * dataCopy)
{
    data = dataCopy;
    {
        /* a a a a a a a a */
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        /* a a a a a a a a */
        if (environment != NULL)
        {
            /* a a a a a a a a */
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}

static void hwnVaSink(char * data, ...)
{
    {
        char dest[100] = "";
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vsnprintf(dest, 100-1, data, args);
        va_end(args);
        printLine(dest);
    }
}

lcKHKjhbZZgimIQjjgCk::~lcKHKjhbZZgimIQjjgCk()
{
    hwnVaSink(data, data);
}
}
#endif /* a */
