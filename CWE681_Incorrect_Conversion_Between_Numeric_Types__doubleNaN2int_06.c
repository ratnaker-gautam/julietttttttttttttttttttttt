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

#include <math.h>
#define CHAR_ARRAY_SIZE 256

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITnRN

void PymaWgWBcdNKbgSefakx_nRN()
{
    if(STATIC_CONST_FIVE==5)
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
}

#endif /* a */

#ifndef OMITNpN

/* a a a a a a */
static void NpN1()
{
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
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

/* a a a a a a a a */
static void NpN2()
{
    if(STATIC_CONST_FIVE==5)
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

void PymaWgWBcdNKbgSefakx_NpN()
{
    NpN1();
    NpN2();
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
#ifndef OMITNpN
    printLine("Calling NpN()...");
    PymaWgWBcdNKbgSefakx_NpN();
    printLine("Finished NpN()");
#endif /* a */
#ifndef OMITnRN
    printLine("Calling nRN()...");
    PymaWgWBcdNKbgSefakx_nRN();
    printLine("Finished nRN()");
#endif /* a */
    return 0;
}

#endif
