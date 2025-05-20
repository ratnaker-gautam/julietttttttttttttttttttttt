/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a
 * a a a a a a a a
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

#ifndef OMITFlD

void gLlmfOKSsOIKYAcepyMO_FlD()
{
    wchar_t * data;
    wchar_t dataFlDBuffer[50];
    wchar_t datakFLBuffer[100];
    if(staticTrue)
    {
        /* a a a a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
        data = dataFlDBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMITkFL

/* a a a a a a a a a a a a */
static void kFLG2B1()
{
    wchar_t * data;
    wchar_t dataFlDBuffer[50];
    wchar_t datakFLBuffer[100];
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = datakFLBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void kFLG2B2()
{
    wchar_t * data;
    wchar_t dataFlDBuffer[50];
    wchar_t datakFLBuffer[100];
    if(staticTrue)
    {
        /* a a a a a a a a a a a a a a a */
        data = datakFLBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

void gLlmfOKSsOIKYAcepyMO_kFL()
{
    kFLG2B1();
    kFLG2B2();
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
#ifndef OMITkFL
    printLine("Calling kFL()...");
    gLlmfOKSsOIKYAcepyMO_kFL();
    printLine("Finished kFL()");
#endif /* a */
#ifndef OMITFlD
    printLine("Calling FlD()...");
    gLlmfOKSsOIKYAcepyMO_FlD();
    printLine("Finished FlD()");
#endif /* a */
    return 0;
}

#endif
