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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITtlx

void JTNdGuFPLlcOSkBfIAHE_tlx()
{
    if(staticReturnsTrue())
    {
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
}

#endif /* a */

#ifndef OMITSXS

/* a a a a a a */
static void SXS1()
{
    if(staticReturnsFalse())
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
}

/* a a a a a a a a */
static void SXS2()
{
    if(staticReturnsTrue())
    {
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
}

void JTNdGuFPLlcOSkBfIAHE_SXS()
{
    SXS1();
    SXS2();
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
#ifndef OMITSXS
    printLine("Calling SXS()...");
    JTNdGuFPLlcOSkBfIAHE_SXS();
    printLine("Finished SXS()");
#endif /* a */
#ifndef OMITtlx
    printLine("Calling tlx()...");
    JTNdGuFPLlcOSkBfIAHE_tlx();
    printLine("Finished tlx()");
#endif /* a */
    return 0;
}

#endif
