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
 * a a a a a a a a a a a a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITcRS

void EjTJQfozHAIbcjenlGhW_cRS()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMITVWy

/* a a a a a a a a a a a a */
static void VWyG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(STATIC_CONST_FIVE!=5)
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
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void VWyG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a */
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

void EjTJQfozHAIbcjenlGhW_VWy()
{
    VWyG2B1();
    VWyG2B2();
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
#ifndef OMITVWy
    printLine("Calling VWy()...");
    EjTJQfozHAIbcjenlGhW_VWy();
    printLine("Finished VWy()");
#endif /* a */
#ifndef OMITcRS
    printLine("Calling cRS()...");
    EjTJQfozHAIbcjenlGhW_cRS();
    printLine("Finished cRS()");
#endif /* a */
    return 0;
}

#endif
