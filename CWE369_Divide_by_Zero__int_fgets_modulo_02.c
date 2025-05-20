/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a
 * a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

#ifndef OMITrPE

void XlitCSBoJhBqrqOjwyfY_rPE()
{
    int data;
    /* a a */
    data = -1;
    if(1)
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
    if(1)
    {
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

#endif /* a */

#ifndef OMITnry

/* a a a a a a a a a a a a a */
static void nryB2G1()
{
    int data;
    /* a a */
    data = -1;
    if(1)
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
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a */
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void nryB2G2()
{
    int data;
    /* a a */
    data = -1;
    if(1)
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
    if(1)
    {
        /* a a a a a a */
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}

/* a a a a a a a a a a a a a */
static void nryG2B1()
{
    int data;
    /* a a */
    data = -1;
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a */
        data = 7;
    }
    if(1)
    {
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

/* a a a a a a a a a a a a a a */
static void nryG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(1)
    {
        /* a a a a a a a a */
        data = 7;
    }
    if(1)
    {
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

void XlitCSBoJhBqrqOjwyfY_nry()
{
    nryB2G1();
    nryB2G2();
    nryG2B1();
    nryG2B2();
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
#ifndef OMITnry
    printLine("Calling nry()...");
    XlitCSBoJhBqrqOjwyfY_nry();
    printLine("Finished nry()");
#endif /* a */
#ifndef OMITrPE
    printLine("Calling rPE()...");
    XlitCSBoJhBqrqOjwyfY_rPE();
    printLine("Finished rPE()");
#endif /* a */
    return 0;
}

#endif
