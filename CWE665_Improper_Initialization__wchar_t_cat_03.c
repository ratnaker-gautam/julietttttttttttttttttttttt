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

#ifndef OMITEzH

void SHgVAEdJpRdXYRUprCRj_EzH()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(5==5)
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

#ifndef OMITmjy

/* a a a a a a a a a a a a */
static void mjyG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(5!=5)
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
static void mjyG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(5==5)
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

void SHgVAEdJpRdXYRUprCRj_mjy()
{
    mjyG2B1();
    mjyG2B2();
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
#ifndef OMITmjy
    printLine("Calling mjy()...");
    SHgVAEdJpRdXYRUprCRj_mjy();
    printLine("Finished mjy()");
#endif /* a */
#ifndef OMITEzH
    printLine("Calling EzH()...");
    SHgVAEdJpRdXYRUprCRj_EzH();
    printLine("Finished EzH()");
#endif /* a */
    return 0;
}

#endif
