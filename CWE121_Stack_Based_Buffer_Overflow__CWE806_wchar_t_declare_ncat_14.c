/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITWIy

void AlXFNozJfdgyWBQXJgID_WIy()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(globalFive==5)
    {
        /* a a a a a a a a a a a a a a a a a a */
        wmemset(data, L'A', 100-1); /* a a a */
        data[100-1] = L'\0'; /* a a */
    }
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a*/
        wcsncat(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMITkoy

/* a a a a a a a a a a a a */
static void koyG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a a a a a */
        wmemset(data, L'A', 50-1); /* a a a */
        data[50-1] = L'\0'; /* a a */
    }
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a*/
        wcsncat(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void koyG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(globalFive==5)
    {
        /* a a a a a a a a a a a a a a a a a a a a */
        wmemset(data, L'A', 50-1); /* a a a */
        data[50-1] = L'\0'; /* a a */
    }
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a*/
        wcsncat(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
    }
}

void AlXFNozJfdgyWBQXJgID_koy()
{
    koyG2B1();
    koyG2B2();
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
#ifndef OMITkoy
    printLine("Calling koy()...");
    AlXFNozJfdgyWBQXJgID_koy();
    printLine("Finished koy()");
#endif /* a */
#ifndef OMITWIy
    printLine("Calling WIy()...");
    AlXFNozJfdgyWBQXJgID_WIy();
    printLine("Finished WIy()");
#endif /* a */
    return 0;
}

#endif
