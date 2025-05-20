/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a */
#define SRC_STRING L"AAAAAAAAAA"

#ifndef OMITzsi

void wgvwFnPjyxNfPejKcVJm_zsi()
{
    wchar_t * data;
    wchar_t datazsiBuffer[10];
    wchar_t datalTeBuffer[10+1];
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = datazsiBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMITlTe

/* a a a a a a a a a a a a */
static void lTeG2B1()
{
    wchar_t * data;
    wchar_t datazsiBuffer[10];
    wchar_t datalTeBuffer[10+1];
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = datalTeBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printWLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void lTeG2B2()
{
    wchar_t * data;
    wchar_t datazsiBuffer[10];
    wchar_t datalTeBuffer[10+1];
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = datalTeBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printWLine(data);
    }
}

void wgvwFnPjyxNfPejKcVJm_lTe()
{
    lTeG2B1();
    lTeG2B2();
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
#ifndef OMITlTe
    printLine("Calling lTe()...");
    wgvwFnPjyxNfPejKcVJm_lTe();
    printLine("Finished lTe()");
#endif /* a */
#ifndef OMITzsi
    printLine("Calling zsi()...");
    wgvwFnPjyxNfPejKcVJm_zsi();
    printLine("Finished zsi()");
#endif /* a */
    return 0;
}

#endif
