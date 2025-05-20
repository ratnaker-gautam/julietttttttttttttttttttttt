/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

#ifndef OMITwHe

void ytiLJJeqneYVQmwvKNGa_wHe()
{
    int data;
    /* a a */
    data = 0;
    goto source;
source:
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    goto sink;
sink:
    {
        /* a a a a a a a a */
        --data;
        int result = data;
        printIntLine(result);
    }
}

#endif /* a */

#ifndef OMITYry

/* a a a a a a a a a a a a a a a */
static void YryB2G()
{
    int data;
    /* a a */
    data = 0;
    goto source;
source:
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    goto sink;
sink:
    /* a a a a a a a a a a */
    if (data > INT_MIN)
    {
        --data;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

/* a a a a a a a a a a a a a a a */
static void YryG2B()
{
    int data;
    /* a a */
    data = 0;
    goto source;
source:
    /* a a a a a a a a a a a a a a a a */
    data = -2;
    goto sink;
sink:
    {
        /* a a a a a a a a */
        --data;
        int result = data;
        printIntLine(result);
    }
}

void ytiLJJeqneYVQmwvKNGa_Yry()
{
    YryB2G();
    YryG2B();
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
#ifndef OMITYry
    printLine("Calling Yry()...");
    ytiLJJeqneYVQmwvKNGa_Yry();
    printLine("Finished Yry()");
#endif /* a */
#ifndef OMITwHe
    printLine("Calling wHe()...");
    ytiLJJeqneYVQmwvKNGa_wHe();
    printLine("Finished wHe()");
#endif /* a */
    return 0;
}

#endif
