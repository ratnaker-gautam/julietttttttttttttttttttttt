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

/* a a a a a a a a a a a
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITWuY

void ruvAkmLuKRZleqSgFgcf_WuY()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

#endif /* a */

#ifndef OMITsVa

/* a a a a a a a a a a a a a */
static void sVaB2G1()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_FALSE)
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
static void sVaB2G2()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
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
static void sVaG2B1()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a */
        data = 7;
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

/* a a a a a a a a a a a a a a */
static void sVaG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a */
        data = 7;
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

void ruvAkmLuKRZleqSgFgcf_sVa()
{
    sVaB2G1();
    sVaB2G2();
    sVaG2B1();
    sVaG2B2();
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
#ifndef OMITsVa
    printLine("Calling sVa()...");
    ruvAkmLuKRZleqSgFgcf_sVa();
    printLine("Finished sVa()");
#endif /* a */
#ifndef OMITWuY
    printLine("Calling WuY()...");
    ruvAkmLuKRZleqSgFgcf_WuY();
    printLine("Finished WuY()");
#endif /* a */
    return 0;
}

#endif
