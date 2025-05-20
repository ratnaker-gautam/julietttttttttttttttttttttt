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

#ifndef OMITZRR

void lbzEltzHQTWplFWspPrc_ZRR()
{
    goto sink;
sink:
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

#ifndef OMITWlT

/* a a a a a a a a */
static void WlT1()
{
    goto sink;
sink:
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

void lbzEltzHQTWplFWspPrc_WlT()
{
    WlT1();
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
#ifndef OMITWlT
    printLine("Calling WlT()...");
    lbzEltzHQTWplFWspPrc_WlT();
    printLine("Finished WlT()");
#endif /* a */
#ifndef OMITZRR
    printLine("Calling ZRR()...");
    lbzEltzHQTWplFWspPrc_ZRR();
    printLine("Finished ZRR()");
#endif /* a */
    return 0;
}

#endif
