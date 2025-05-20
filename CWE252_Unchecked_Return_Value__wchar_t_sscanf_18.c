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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#define SRC L"sscanf"

#ifndef OMITBJj

void ZwEilvFUGuKJSToOHxgJ_BJj()
{
    goto sink;
sink:
    {
        /* a a a a a a a a a a
         * a a a a a a a a a a a a a a */
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        /* a a a a a a a */
        swscanf(SRC, L"%99s\0", data);
    }
}

#endif /* a */

#ifndef OMITsYY

/* a a a a a a a a */
static void sYY1()
{
    goto sink;
sink:
    {
        /* a a a a a a a a a a
         * a a a a a a a a a a a a a a */
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        /* a a a a a */
        if (swscanf(SRC, L"%99s\0", data) == EOF)
        {
            printLine("swscanf failed!");
        }
    }
}

void ZwEilvFUGuKJSToOHxgJ_sYY()
{
    sYY1();
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
#ifndef OMITsYY
    printLine("Calling sYY()...");
    ZwEilvFUGuKJSToOHxgJ_sYY();
    printLine("Finished sYY()");
#endif /* a */
#ifndef OMITBJj
    printLine("Calling BJj()...");
    ZwEilvFUGuKJSToOHxgJ_BJj();
    printLine("Finished BJj()");
#endif /* a */
    return 0;
}

#endif
