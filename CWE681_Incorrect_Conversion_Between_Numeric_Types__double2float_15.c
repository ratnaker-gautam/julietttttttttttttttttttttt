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

#ifndef OMITNAV

void fZfgLGzMrXmNuQJOIgZg_NAV()
{
    switch(6)
    {
    case 6:
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
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITOeS

/* a a a a a a */
static void OeS1()
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

/* a a a a a a a */
static void OeS2()
{
    switch(6)
    {
    case 6:
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
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void fZfgLGzMrXmNuQJOIgZg_OeS()
{
    OeS1();
    OeS2();
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
#ifndef OMITOeS
    printLine("Calling OeS()...");
    fZfgLGzMrXmNuQJOIgZg_OeS();
    printLine("Finished OeS()");
#endif /* a */
#ifndef OMITNAV
    printLine("Calling NAV()...");
    fZfgLGzMrXmNuQJOIgZg_NAV();
    printLine("Finished NAV()");
#endif /* a */
    return 0;
}

#endif
