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

#define CHAR_ARRAY_SIZE 256

#ifndef OMITrXq

void ZvPmzVrAfRDCZPbbGdfb_rXq()
{
    if(globalTrue)
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            double doubleNumber = 0;
            /* a a a a a a a a a */
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
            printIntLine((int)doubleNumber);
        }
    }
}

#endif /* a */

#ifndef OMITAxv

/* a a a a a a */
static void Axv1()
{
    if(globalFalse)
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
            if (doubleNumber > INT_MAX || doubleNumber < INT_MIN)
            {
                printLine("Value is too small or large to be represented as an int");
            }
            else
            {
                printIntLine((int)doubleNumber);
            }
        }
    }
}

/* a a a a a a a a */
static void Axv2()
{
    if(globalTrue)
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
            if (doubleNumber > INT_MAX || doubleNumber < INT_MIN)
            {
                printLine("Value is too small or large to be represented as an int");
            }
            else
            {
                printIntLine((int)doubleNumber);
            }
        }
    }
}

void ZvPmzVrAfRDCZPbbGdfb_Axv()
{
    Axv1();
    Axv2();
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
#ifndef OMITAxv
    printLine("Calling Axv()...");
    ZvPmzVrAfRDCZPbbGdfb_Axv();
    printLine("Finished Axv()");
#endif /* a */
#ifndef OMITrXq
    printLine("Calling rXq()...");
    ZvPmzVrAfRDCZPbbGdfb_rXq();
    printLine("Finished rXq()");
#endif /* a */
    return 0;
}

#endif
