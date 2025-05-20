/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITqqX

void YjvRqmawltoxeuEnKvrN_qqX()
{
    char data;
    data = ' ';
    if(5==5)
    {
        /* a a a a a a */
        data = (char)RAND32();
    }
    if(5==5)
    {
        {
            /* a a a a a a a a */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITWcl

/* a a a a a a a a a a a a a */
static void WclB2G1()
{
    char data;
    data = ' ';
    if(5==5)
    {
        /* a a a a a a */
        data = (char)RAND32();
    }
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        if (data > CHAR_MIN)
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void WclB2G2()
{
    char data;
    data = ' ';
    if(5==5)
    {
        /* a a a a a a */
        data = (char)RAND32();
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        if (data > CHAR_MIN)
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a */
static void WclG2B1()
{
    char data;
    data = ' ';
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(5==5)
    {
        {
            /* a a a a a a a a */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void WclG2B2()
{
    char data;
    data = ' ';
    if(5==5)
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(5==5)
    {
        {
            /* a a a a a a a a */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}

void YjvRqmawltoxeuEnKvrN_Wcl()
{
    WclB2G1();
    WclB2G2();
    WclG2B1();
    WclG2B2();
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
#ifndef OMITWcl
    printLine("Calling Wcl()...");
    YjvRqmawltoxeuEnKvrN_Wcl();
    printLine("Finished Wcl()");
#endif /* a */
#ifndef OMITqqX
    printLine("Calling qqX()...");
    YjvRqmawltoxeuEnKvrN_qqX();
    printLine("Finished qqX()");
#endif /* a */
    return 0;
}

#endif
