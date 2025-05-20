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

#define CHAR_ARRAY_SIZE 256

#ifndef OMITxBU

void qGOzrZUVaomzxeHfKwId_xBU()
{
    if(globalReturnsTrueOrFalse())
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
    else
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

#endif /* a */

#ifndef OMITEHL

/* a a a a a a a a a a a */
static void EHL1()
{
    if(globalReturnsTrueOrFalse())
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
    else
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

void qGOzrZUVaomzxeHfKwId_EHL()
{
    EHL1();
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
#ifndef OMITEHL
    printLine("Calling EHL()...");
    qGOzrZUVaomzxeHfKwId_EHL();
    printLine("Finished EHL()");
#endif /* a */
#ifndef OMITxBU
    printLine("Calling xBU()...");
    qGOzrZUVaomzxeHfKwId_xBU();
    printLine("Finished xBU()");
#endif /* a */
    return 0;
}

#endif
