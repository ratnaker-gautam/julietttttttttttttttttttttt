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
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITvWZ

void NjxowLojHUmbnKAyMBPk_vWZ()
{
    if(staticReturnsTrue())
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

#ifndef OMITOKS

/* a a a a a a */
static void OKS1()
{
    if(staticReturnsFalse())
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
static void OKS2()
{
    if(staticReturnsTrue())
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

void NjxowLojHUmbnKAyMBPk_OKS()
{
    OKS1();
    OKS2();
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
#ifndef OMITOKS
    printLine("Calling OKS()...");
    NjxowLojHUmbnKAyMBPk_OKS();
    printLine("Finished OKS()");
#endif /* a */
#ifndef OMITvWZ
    printLine("Calling vWZ()...");
    NjxowLojHUmbnKAyMBPk_vWZ();
    printLine("Finished vWZ()");
#endif /* a */
    return 0;
}

#endif
