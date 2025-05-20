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

#ifndef OMITRhW

void ZSEOdgUIbOmwWTTuUjlH_RhW()
{
    while(1)
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
        break;
    }
}

#endif /* a */

#ifndef OMITzjm

/* a a a a a a a a */
static void zjm1()
{
    while(1)
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
        break;
    }
}

void ZSEOdgUIbOmwWTTuUjlH_zjm()
{
    zjm1();
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
#ifndef OMITzjm
    printLine("Calling zjm()...");
    ZSEOdgUIbOmwWTTuUjlH_zjm();
    printLine("Finished zjm()");
#endif /* a */
#ifndef OMITRhW
    printLine("Calling RhW()...");
    ZSEOdgUIbOmwWTTuUjlH_RhW();
    printLine("Finished RhW()");
#endif /* a */
    return 0;
}

#endif
