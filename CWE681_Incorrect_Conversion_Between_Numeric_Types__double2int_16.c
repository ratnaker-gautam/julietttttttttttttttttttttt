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

#ifndef OMITsLo

void UyPkqEWkuErmNrHSSZOj_sLo()
{
    while(1)
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
        break;
    }
}

#endif /* a */

#ifndef OMITnsS

/* a a a a a a a a */
static void nsS1()
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
            if (doubleNumber > INT_MAX || doubleNumber < INT_MIN)
            {
                printLine("Value is too small or large to be represented as an int");
            }
            else
            {
                printIntLine((int)doubleNumber);
            }
        }
        break;
    }
}

void UyPkqEWkuErmNrHSSZOj_nsS()
{
    nsS1();
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
#ifndef OMITnsS
    printLine("Calling nsS()...");
    UyPkqEWkuErmNrHSSZOj_nsS();
    printLine("Finished nsS()");
#endif /* a */
#ifndef OMITsLo
    printLine("Calling sLo()...");
    UyPkqEWkuErmNrHSSZOj_sLo();
    printLine("Finished sLo()");
#endif /* a */
    return 0;
}

#endif
