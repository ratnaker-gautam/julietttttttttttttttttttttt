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

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a
 */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITUrc

void CxboNbhlnYGYMZqBkMiu_Urc()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticTrue)
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

#ifndef OMITlxA

/* a a a a a a a a a a a a */
static void lxAG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticFalse)
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
static void lxAG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticTrue)
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

void CxboNbhlnYGYMZqBkMiu_lxA()
{
    lxAG2B1();
    lxAG2B2();
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
#ifndef OMITlxA
    printLine("Calling lxA()...");
    CxboNbhlnYGYMZqBkMiu_lxA();
    printLine("Finished lxA()");
#endif /* a */
#ifndef OMITUrc
    printLine("Calling Urc()...");
    CxboNbhlnYGYMZqBkMiu_Urc();
    printLine("Finished Urc()");
#endif /* a */
    return 0;
}

#endif
