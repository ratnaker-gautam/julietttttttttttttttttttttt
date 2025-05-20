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

#ifndef OMITbUH

void uJNRZsxVsWJItYhhvwkX_bUH()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a a a */
            fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin);
        }
    }
}

#endif /* a */

#ifndef OMITDkM

/* a a a a a a */
static void DkM1()
{
    if(GLOBAL_CONST_FALSE)
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
            if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}

/* a a a a a a a a */
static void DkM2()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a */
            if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}

void uJNRZsxVsWJItYhhvwkX_DkM()
{
    DkM1();
    DkM2();
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
#ifndef OMITDkM
    printLine("Calling DkM()...");
    uJNRZsxVsWJItYhhvwkX_DkM();
    printLine("Finished DkM()");
#endif /* a */
#ifndef OMITbUH
    printLine("Calling bUH()...");
    uJNRZsxVsWJItYhhvwkX_bUH();
    printLine("Finished bUH()");
#endif /* a */
    return 0;
}

#endif
