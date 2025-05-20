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

#ifndef OMITiQP

void TrELkljnijdXjfQNSzlr_iQP()
{
    switch(6)
    {
    case 6:
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
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITRLK

/* a a a a a a */
static void RLK1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
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

/* a a a a a a a */
static void RLK2()
{
    switch(6)
    {
    case 6:
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
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void TrELkljnijdXjfQNSzlr_RLK()
{
    RLK1();
    RLK2();
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
#ifndef OMITRLK
    printLine("Calling RLK()...");
    TrELkljnijdXjfQNSzlr_RLK();
    printLine("Finished RLK()");
#endif /* a */
#ifndef OMITiQP
    printLine("Calling iQP()...");
    TrELkljnijdXjfQNSzlr_iQP();
    printLine("Finished iQP()");
#endif /* a */
    return 0;
}

#endif
