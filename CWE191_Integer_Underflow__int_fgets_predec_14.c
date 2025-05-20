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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

#ifndef OMITbbg

void xdIGRTsdPYNQxUsGiCyr_bbg()
{
    int data;
    /* a a */
    data = 0;
    if(globalFive==5)
    {
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
    }
    if(globalFive==5)
    {
        {
            /* a a a a a a a a */
            --data;
            int result = data;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITfIT

/* a a a a a a a a a a a a a */
static void fITB2G1()
{
    int data;
    /* a a */
    data = 0;
    if(globalFive==5)
    {
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
    }
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
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
}

/* a a a a a a a a a a a a a a */
static void fITB2G2()
{
    int data;
    /* a a */
    data = 0;
    if(globalFive==5)
    {
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
    }
    if(globalFive==5)
    {
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
}

/* a a a a a a a a a a a a a */
static void fITG2B1()
{
    int data;
    /* a a */
    data = 0;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(globalFive==5)
    {
        {
            /* a a a a a a a a */
            --data;
            int result = data;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void fITG2B2()
{
    int data;
    /* a a */
    data = 0;
    if(globalFive==5)
    {
        /* a a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(globalFive==5)
    {
        {
            /* a a a a a a a a */
            --data;
            int result = data;
            printIntLine(result);
        }
    }
}

void xdIGRTsdPYNQxUsGiCyr_fIT()
{
    fITB2G1();
    fITB2G2();
    fITG2B1();
    fITG2B2();
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
#ifndef OMITfIT
    printLine("Calling fIT()...");
    xdIGRTsdPYNQxUsGiCyr_fIT();
    printLine("Finished fIT()");
#endif /* a */
#ifndef OMITbbg
    printLine("Calling bbg()...");
    xdIGRTsdPYNQxUsGiCyr_bbg();
    printLine("Finished bbg()");
#endif /* a */
    return 0;
}

#endif
