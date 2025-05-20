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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <float.h>
#define CHAR_ARRAY_SIZE 256

#ifndef OMITvhX

void MtiZLLqcnVWYjHgwHJtf_vhX()
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

#endif /* a */

#ifndef OMITOSN

static void OSN1()
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

void MtiZLLqcnVWYjHgwHJtf_OSN()
{
    OSN1();
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
#ifndef OMITOSN
    printLine("Calling OSN()...");
    MtiZLLqcnVWYjHgwHJtf_OSN();
    printLine("Finished OSN()");
#endif /* a */
#ifndef OMITvhX
    printLine("Calling vhX()...");
    MtiZLLqcnVWYjHgwHJtf_vhX();
    printLine("Finished vhX()");
#endif /* a */
    return 0;
}

#endif
