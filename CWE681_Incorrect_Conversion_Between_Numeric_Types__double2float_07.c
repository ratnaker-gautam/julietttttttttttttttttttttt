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

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITHpy

void fRtwvORMvQfkssScQaEJ_Hpy()
{
    if(staticFive==5)
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

#ifndef OMITtoJ

/* a a a a a a */
static void toJ1()
{
    if(staticFive!=5)
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
static void toJ2()
{
    if(staticFive==5)
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

void fRtwvORMvQfkssScQaEJ_toJ()
{
    toJ1();
    toJ2();
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
#ifndef OMITtoJ
    printLine("Calling toJ()...");
    fRtwvORMvQfkssScQaEJ_toJ();
    printLine("Finished toJ()");
#endif /* a */
#ifndef OMITHpy
    printLine("Calling Hpy()...");
    fRtwvORMvQfkssScQaEJ_Hpy();
    printLine("Finished Hpy()");
#endif /* a */
    return 0;
}

#endif
