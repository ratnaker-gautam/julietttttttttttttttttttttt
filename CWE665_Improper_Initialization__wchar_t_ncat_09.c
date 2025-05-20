/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a
 * a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITOCr

void dOhCeEVEJSEzLQoLBxVp_OCr()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    {
        size_t sourceLen;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        sourceLen = wcslen(source);
        /* a a a a a a a a a a a a a */
        wcsncat(data, source, sourceLen);
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMITSds

/* a a a a a a a a a a a a */
static void SdsG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a */
        data[0] = L'\0'; /* a a */
    }
    {
        size_t sourceLen;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        sourceLen = wcslen(source);
        /* a a a a a a a a a a a a a */
        wcsncat(data, source, sourceLen);
        printWLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void SdsG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a */
        data[0] = L'\0'; /* a a */
    }
    {
        size_t sourceLen;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        sourceLen = wcslen(source);
        /* a a a a a a a a a a a a a */
        wcsncat(data, source, sourceLen);
        printWLine(data);
    }
}

void dOhCeEVEJSEzLQoLBxVp_Sds()
{
    SdsG2B1();
    SdsG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITSds
    printLine("Calling Sds()...");
    dOhCeEVEJSEzLQoLBxVp_Sds();
    printLine("Finished Sds()");
#endif /* a */
#ifndef OMITOCr
    printLine("Calling OCr()...");
    dOhCeEVEJSEzLQoLBxVp_OCr();
    printLine("Finished OCr()");
#endif /* a */
    return 0;
}

#endif
