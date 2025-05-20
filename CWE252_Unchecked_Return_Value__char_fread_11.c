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

#ifndef OMITGHS

void GghXxFrIBzLHADHOYUwg_GHS()
{
    if(globalReturnsTrue())
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a a a */
            fread((char *)data, sizeof(char), (size_t)(100-1), stdin);
        }
    }
}

#endif /* a */

#ifndef OMITpUE

/* a a a a a a */
static void pUE1()
{
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a */
            if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}

/* a a a a a a a a */
static void pUE2()
{
    if(globalReturnsTrue())
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a */
            if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}

void GghXxFrIBzLHADHOYUwg_pUE()
{
    pUE1();
    pUE2();
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
#ifndef OMITpUE
    printLine("Calling pUE()...");
    GghXxFrIBzLHADHOYUwg_pUE();
    printLine("Finished pUE()");
#endif /* a */
#ifndef OMITGHS
    printLine("Calling GHS()...");
    GghXxFrIBzLHADHOYUwg_GHS();
    printLine("Finished GHS()");
#endif /* a */
    return 0;
}

#endif
