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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>
#define CHAR_ARRAY_SIZE 256

#ifndef OMITVxT

void bIfaIsrYuWUiPZsxgAaE_VxT()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            double doubleNumber = 0;
            /*  * a a a a a a a a a
             *
             * a a a a a a a a a a a a a a a
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
            printIntLine((int)(sqrt(doubleNumber)));
        }
    }
    else
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            double doubleNumber = 0;
            /*  * a a a a a a a a a
             *
             * a a a a a a a a a a a a a a a
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
            /* a a a a a a a a a a a a a */
            if (doubleNumber < 0)
            {
                printLine("Value is negative");
            }
            else
            {
                printIntLine((int)(sqrt(doubleNumber)));
            }
        }
    }
}

#endif /* a */

#ifndef OMITrxE

/* a a a a a a a a a a a */
static void rxE1()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            double doubleNumber = 0;
            /*  * a a a a a a a a a
             *
             * a a a a a a a a a a a a a a a
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
            /* a a a a a a a a a a a a a */
            if (doubleNumber < 0)
            {
                printLine("Value is negative");
            }
            else
            {
                printIntLine((int)(sqrt(doubleNumber)));
            }
        }
    }
    else
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            double doubleNumber = 0;
            /*  * a a a a a a a a a
             *
             * a a a a a a a a a a a a a a a
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
            /* a a a a a a a a a a a a a */
            if (doubleNumber < 0)
            {
                printLine("Value is negative");
            }
            else
            {
                printIntLine((int)(sqrt(doubleNumber)));
            }
        }
    }
}

void bIfaIsrYuWUiPZsxgAaE_rxE()
{
    rxE1();
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
#ifndef OMITrxE
    printLine("Calling rxE()...");
    bIfaIsrYuWUiPZsxgAaE_rxE();
    printLine("Finished rxE()");
#endif /* a */
#ifndef OMITVxT
    printLine("Calling VxT()...");
    bIfaIsrYuWUiPZsxgAaE_VxT();
    printLine("Finished VxT()");
#endif /* a */
    return 0;
}

#endif
