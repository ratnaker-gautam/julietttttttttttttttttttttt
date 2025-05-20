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

#ifndef OMITfdt

void RHrwEYCjcVoTQxfVRXqG_fdt()
{
    if(GLOBAL_CONST_FIVE==5)
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

#ifndef OMITgKq

/* a a a a a a */
static void gKq1()
{
    if(GLOBAL_CONST_FIVE!=5)
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
static void gKq2()
{
    if(GLOBAL_CONST_FIVE==5)
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

void RHrwEYCjcVoTQxfVRXqG_gKq()
{
    gKq1();
    gKq2();
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
#ifndef OMITgKq
    printLine("Calling gKq()...");
    RHrwEYCjcVoTQxfVRXqG_gKq();
    printLine("Finished gKq()");
#endif /* a */
#ifndef OMITfdt
    printLine("Calling fdt()...");
    RHrwEYCjcVoTQxfVRXqG_fdt();
    printLine("Finished fdt()");
#endif /* a */
    return 0;
}

#endif
