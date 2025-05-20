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

#define CHAR_ARRAY_SIZE 256

#ifndef OMITWbG

void QdFUWafXAqmbmNnjcPpK_WbG()
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

#endif /* a */

#ifndef OMITeFs

static void eFs1()
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

void QdFUWafXAqmbmNnjcPpK_eFs()
{
    eFs1();
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
#ifndef OMITeFs
    printLine("Calling eFs()...");
    QdFUWafXAqmbmNnjcPpK_eFs();
    printLine("Finished eFs()");
#endif /* a */
#ifndef OMITWbG
    printLine("Calling WbG()...");
    QdFUWafXAqmbmNnjcPpK_WbG();
    printLine("Finished WbG()");
#endif /* a */
    return 0;
}

#endif
