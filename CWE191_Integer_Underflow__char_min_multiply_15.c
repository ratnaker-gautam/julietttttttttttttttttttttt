/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITAPY

void psYiLHvjzbKQyfltSahv_APY()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        /* a a a a a a a a a a */
        data = CHAR_MIN;
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            char result = data * 2;
            printHexCharLine(result);
        }
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITYHr

/* a a a a a a a a a a a a a */
static void YHrB2G1()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        /* a a a a a a a a a a */
        data = CHAR_MIN;
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (CHAR_MIN/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
        break;
    }
}

/* a a a a a a a a a a a a a a */
static void YHrB2G2()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        /* a a a a a a a a a a */
        data = CHAR_MIN;
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (CHAR_MIN/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

/* a a a a a a a a a a a a a */
static void YHrG2B1()
{
    char data;
    data = ' ';
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
        /* a a a a a a a a a a a a a a a */
        data = -2;
        break;
    }
    switch(7)
    {
    case 7:
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            char result = data * 2;
            printHexCharLine(result);
        }
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

/* a a a a a a a a a a a a a a */
static void YHrG2B2()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        /* a a a a a a a a a a a a a a a */
        data = -2;
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            char result = data * 2;
            printHexCharLine(result);
        }
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void psYiLHvjzbKQyfltSahv_YHr()
{
    YHrB2G1();
    YHrB2G2();
    YHrG2B1();
    YHrG2B2();
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
#ifndef OMITYHr
    printLine("Calling YHr()...");
    psYiLHvjzbKQyfltSahv_YHr();
    printLine("Finished YHr()");
#endif /* a */
#ifndef OMITAPY
    printLine("Calling APY()...");
    psYiLHvjzbKQyfltSahv_APY();
    printLine("Finished APY()");
#endif /* a */
    return 0;
}

#endif
