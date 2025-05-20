/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>

#ifndef OMITNMP

void wfYkeUCRMaCczdZOYlcI_NMP()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        /* a a a a a a a a a a */
        data = CHAR_MAX;
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        /* a a a a*a a a a a a */
        char result = data * data;
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

#ifndef OMITMQd

/* a a a a a a a a a a a a a */
static void MQdB2G1()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        /* a a a a a a a a a a */
        data = CHAR_MAX;
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
        /* a a a a a a a a a a */
        if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
        {
            char result = data * data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    }
}

/* a a a a a a a a a a a a a a */
static void MQdB2G2()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        /* a a a a a a a a a a */
        data = CHAR_MAX;
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        /* a a a a a a a a a a */
        if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
        {
            char result = data * data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

/* a a a a a a a a a a a a a */
static void MQdG2B1()
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
        data = 2;
        break;
    }
    switch(7)
    {
    case 7:
    {
        /* a a a a*a a a a a a */
        char result = data * data;
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
static void MQdG2B2()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        /* a a a a a a a a a a a a a a a */
        data = 2;
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        /* a a a a*a a a a a a */
        char result = data * data;
        printHexCharLine(result);
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void wfYkeUCRMaCczdZOYlcI_MQd()
{
    MQdB2G1();
    MQdB2G2();
    MQdG2B1();
    MQdG2B2();
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
#ifndef OMITMQd
    printLine("Calling MQd()...");
    wfYkeUCRMaCczdZOYlcI_MQd();
    printLine("Finished MQd()");
#endif /* a */
#ifndef OMITNMP
    printLine("Calling NMP()...");
    wfYkeUCRMaCczdZOYlcI_NMP();
    printLine("Finished NMP()");
#endif /* a */
    return 0;
}

#endif
