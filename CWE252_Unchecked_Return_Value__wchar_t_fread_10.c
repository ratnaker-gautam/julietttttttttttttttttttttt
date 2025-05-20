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

#ifndef OMITxES

void JwlCqnXUTGuKGgjSECMZ_xES()
{
    if(globalTrue)
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

#ifndef OMITfrO

/* a a a a a a */
static void frO1()
{
    if(globalFalse)
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
static void frO2()
{
    if(globalTrue)
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

void JwlCqnXUTGuKGgjSECMZ_frO()
{
    frO1();
    frO2();
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
#ifndef OMITfrO
    printLine("Calling frO()...");
    JwlCqnXUTGuKGgjSECMZ_frO();
    printLine("Finished frO()");
#endif /* a */
#ifndef OMITxES
    printLine("Calling xES()...");
    JwlCqnXUTGuKGgjSECMZ_xES();
    printLine("Finished xES()");
#endif /* a */
    return 0;
}

#endif
