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

#define SRC "string"

#ifdef _WIN32
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
#endif

#ifndef OMITEmo

void RZhSKQBBlswpeTCecjGT_Emo()
{
    if(globalFive==5)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a a a */
            SNPRINTF(data,100-strlen(SRC)-1, "%s\n", SRC);
        }
    }
}

#endif /* a */

#ifndef OMITNLm

/* a a a a a a */
static void NLm1()
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
            if (SNPRINTF(data,100-strlen(SRC)-1, "%s\n", SRC) < 0)
            {
                printLine("snprintf failed!");
            }
        }
    }
}

/* a a a a a a a a */
static void NLm2()
{
    if(globalFive==5)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a */
            if (SNPRINTF(data,100-strlen(SRC)-1, "%s\n", SRC) < 0)
            {
                printLine("snprintf failed!");
            }
        }
    }
}

void RZhSKQBBlswpeTCecjGT_NLm()
{
    NLm1();
    NLm2();
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
#ifndef OMITNLm
    printLine("Calling NLm()...");
    RZhSKQBBlswpeTCecjGT_NLm();
    printLine("Finished NLm()");
#endif /* a */
#ifndef OMITEmo
    printLine("Calling Emo()...");
    RZhSKQBBlswpeTCecjGT_Emo();
    printLine("Finished Emo()");
#endif /* a */
    return 0;
}

#endif
