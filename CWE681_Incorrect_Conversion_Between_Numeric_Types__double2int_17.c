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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE 256

#ifndef OMITdtN

void ifyMIkoFlCSDoWVxjtsv_dtN()
{
    int j;
    for(j = 0; j < 1; j++)
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

#ifndef OMITbXx

/* a a a a a a a a */
static void bXx1()
{
    int k;
    for(k = 0; k < 1; k++)
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

void ifyMIkoFlCSDoWVxjtsv_bXx()
{
    bXx1();
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
#ifndef OMITbXx
    printLine("Calling bXx()...");
    ifyMIkoFlCSDoWVxjtsv_bXx();
    printLine("Finished bXx()");
#endif /* a */
#ifndef OMITdtN
    printLine("Calling dtN()...");
    ifyMIkoFlCSDoWVxjtsv_dtN();
    printLine("Finished dtN()");
#endif /* a */
    return 0;
}

#endif
