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

#include <float.h>
#define CHAR_ARRAY_SIZE 256

#ifndef OMITlEU

void OfWIXNfRfjaxYgQMfxHc_lEU()
{
    int j;
    for(j = 0; j < 1; j++)
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

#ifndef OMITAeA

/* a a a a a a a a */
static void AeA1()
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

void OfWIXNfRfjaxYgQMfxHc_AeA()
{
    AeA1();
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
#ifndef OMITAeA
    printLine("Calling AeA()...");
    OfWIXNfRfjaxYgQMfxHc_AeA();
    printLine("Finished AeA()");
#endif /* a */
#ifndef OMITlEU
    printLine("Calling lEU()...");
    OfWIXNfRfjaxYgQMfxHc_lEU();
    printLine("Finished lEU()");
#endif /* a */
    return 0;
}

#endif
