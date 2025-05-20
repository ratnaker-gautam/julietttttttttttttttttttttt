/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#define SRC L"string"

#ifdef _WIN32
#define SNPRINTF _snwprintf
#else
#define SNPRINTF swprintf
#endif

#ifndef OMIThWf

void HtWrisAMyZOKEibOyPMe_hWf()
{
    if(globalFive==5)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a a a */
            SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC);
        }
    }
}

#endif /* a */

#ifndef OMITFTn

/* a a a a a a */
static void FTn1()
{
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a */
            if (SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC) < 0)
            {
                printLine("snwprintf failed!");
            }
        }
    }
}

/* a a a a a a a a */
static void FTn2()
{
    if(globalFive==5)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a */
            if (SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC) < 0)
            {
                printLine("snwprintf failed!");
            }
        }
    }
}

void HtWrisAMyZOKEibOyPMe_FTn()
{
    FTn1();
    FTn2();
}

#endif /* a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITFTn
    printLine("Calling FTn()...");
    HtWrisAMyZOKEibOyPMe_FTn();
    printLine("Finished FTn()");
#endif /* a */
#ifndef OMIThWf
    printLine("Calling hWf()...");
    HtWrisAMyZOKEibOyPMe_hWf();
    printLine("Finished hWf()");
#endif /* a */
    return 0;
}

#endif
