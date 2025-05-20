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

#define SRC "sscanf"

#ifndef OMITbtI

void OiJDTPyuSXtJkugIjnKT_btI()
{
    if(globalFive==5)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a a a */
            sscanf(SRC, "%99s\0", data);
        }
    }
}

#endif /* a */

#ifndef OMITJNS

/* a a a a a a */
static void JNS1()
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
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a */
            if (sscanf(SRC, "%99s\0", data) == EOF)
            {
                printLine("sscanf failed!");
            }
        }
    }
}

/* a a a a a a a a */
static void JNS2()
{
    if(globalFive==5)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a */
            if (sscanf(SRC, "%99s\0", data) == EOF)
            {
                printLine("sscanf failed!");
            }
        }
    }
}

void OiJDTPyuSXtJkugIjnKT_JNS()
{
    JNS1();
    JNS2();
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
#ifndef OMITJNS
    printLine("Calling JNS()...");
    OiJDTPyuSXtJkugIjnKT_JNS();
    printLine("Finished JNS()");
#endif /* a */
#ifndef OMITbtI
    printLine("Calling btI()...");
    OiJDTPyuSXtJkugIjnKT_btI();
    printLine("Finished btI()");
#endif /* a */
    return 0;
}

#endif
