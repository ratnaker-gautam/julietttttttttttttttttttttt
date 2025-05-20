/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <float.h>
#define CHAR_ARRAY_SIZE 256

#ifndef OMITGMx

void TawvWiCqCzuMPiewubmU_GMx()
{
    if(globalFive==5)
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            double doubleNumber = 0;
            /* a a a a a a a a a
             *
             * a a a
             * a
             */
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                /* a a a */
                doubleNumber = atof(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
            /* a a a a a a a a a a */
            printFloatLine((float)doubleNumber);
        }
    }
}

#endif /* a */

#ifndef OMITRsb

/* a a a a a a */
static void Rsb1()
{
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            double doubleNumber = 0;
            /* a a a a a a a a a
             *
             * a a a
             * a
             */
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                /* a a a */
                doubleNumber = atof(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
            /* a a a a a a a a */
            if (doubleNumber > FLT_MAX || doubleNumber < FLT_MIN)
            {
                printLine("Value is too small or large to be represented as a float");
            }
            else
            {
                printFloatLine((float)doubleNumber);
            }
        }
    }
}

/* a a a a a a a a */
static void Rsb2()
{
    if(globalFive==5)
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            double doubleNumber = 0;
            /* a a a a a a a a a
             *
             * a a a
             * a
             */
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                /* a a a */
                doubleNumber = atof(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
            /* a a a a a a a a */
            if (doubleNumber > FLT_MAX || doubleNumber < FLT_MIN)
            {
                printLine("Value is too small or large to be represented as a float");
            }
            else
            {
                printFloatLine((float)doubleNumber);
            }
        }
    }
}

void TawvWiCqCzuMPiewubmU_Rsb()
{
    Rsb1();
    Rsb2();
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
#ifndef OMITRsb
    printLine("Calling Rsb()...");
    TawvWiCqCzuMPiewubmU_Rsb();
    printLine("Finished Rsb()");
#endif /* a */
#ifndef OMITGMx
    printLine("Calling GMx()...");
    TawvWiCqCzuMPiewubmU_GMx();
    printLine("Finished GMx()");
#endif /* a */
    return 0;
}

#endif
