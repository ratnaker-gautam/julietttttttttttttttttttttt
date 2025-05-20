/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a a a a a a a a
 *    a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITAHm

void VxjFnBZAjILCyIcYYSZK_AHm()
{
    goto sink;
sink:
    {
        /* a a a a a a a a a a
         * a a a a a a a a a a a a a a */
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        printLine("Please enter a string: ");
        /* a a a a a a a */
        fgetws(data, 100, stdin);
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMITJkC

/* a a a a a a a a */
static void JkC1()
{
    goto sink;
sink:
    {
        /* a a a a a a a a a a
         * a a a a a a a a a a a a a a */
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        printLine("Please enter a string: ");
        /* a a a a a */
        if (fgetws(data, 100, stdin) == NULL)
        {
            printLine("fgetws failed!");
            exit(1);
        }
        printWLine(data);
    }
}

void VxjFnBZAjILCyIcYYSZK_JkC()
{
    JkC1();
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
#ifndef OMITJkC
    printLine("Calling JkC()...");
    VxjFnBZAjILCyIcYYSZK_JkC();
    printLine("Finished JkC()");
#endif /* a */
#ifndef OMITAHm
    printLine("Calling AHm()...");
    VxjFnBZAjILCyIcYYSZK_AHm();
    printLine("Finished AHm()");
#endif /* a */
    return 0;
}

#endif
