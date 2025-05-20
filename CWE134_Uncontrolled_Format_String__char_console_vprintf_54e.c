/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a
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

#ifndef OMITVpy

static void VpyVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

void fEqXrCAzmSJkteNKlopk_VpySink(char * data)
{
    VpyVaSink(data, data);
}

#endif /* a */

#ifndef OMITUYg

/* a a a a a a a */
static void UYgG2BVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

void fEqXrCAzmSJkteNKlopk_UYgG2BSink(char * data)
{
    UYgG2BVaSink(data, data);
}

/* a a a a a a a */
static void UYgB2GVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vprintf("%s", args);
        va_end(args);
    }
}

void fEqXrCAzmSJkteNKlopk_UYgB2GSink(char * data)
{
    UYgB2GVaSink(data, data);
}

#endif /* a */
