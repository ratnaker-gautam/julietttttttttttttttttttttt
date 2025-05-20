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

#include <float.h>
#define CHAR_ARRAY_SIZE 256

#ifndef OMITgkL

void ZYJjXoEXEoiPRWpggziO_gkL()
{
    while(1)
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
        break;
    }
}

#endif /* a */

#ifndef OMITmWi

/* a a a a a a a a */
static void mWi1()
{
    while(1)
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
        break;
    }
}

void ZYJjXoEXEoiPRWpggziO_mWi()
{
    mWi1();
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
#ifndef OMITmWi
    printLine("Calling mWi()...");
    ZYJjXoEXEoiPRWpggziO_mWi();
    printLine("Finished mWi()");
#endif /* a */
#ifndef OMITgkL
    printLine("Calling gkL()...");
    ZYJjXoEXEoiPRWpggziO_gkL();
    printLine("Finished gkL()");
#endif /* a */
    return 0;
}

#endif
