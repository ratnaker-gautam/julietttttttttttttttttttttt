/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>

#ifndef OMITUnY

void bkQHaVLyxippjUvAOxrT_UnY()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        /* a a a a a a */
        data = (char)RAND32();
    }
    if(globalFive==5)
    {
        {
            /* a a a a*a a a a a a */
            char result = data * data;
            printHexCharLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITQpm

/* a a a a a a a a a a a a a */
static void QpmB2G1()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        /* a a a a a a */
        data = (char)RAND32();
    }
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}

/* a a a a a a a a a a a a a a */
static void QpmB2G2()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        /* a a a a a a */
        data = (char)RAND32();
    }
    if(globalFive==5)
    {
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
    }
}

/* a a a a a a a a a a a a a */
static void QpmG2B1()
{
    char data;
    data = ' ';
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(globalFive==5)
    {
        {
            /* a a a a*a a a a a a */
            char result = data * data;
            printHexCharLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void QpmG2B2()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(globalFive==5)
    {
        {
            /* a a a a*a a a a a a */
            char result = data * data;
            printHexCharLine(result);
        }
    }
}

void bkQHaVLyxippjUvAOxrT_Qpm()
{
    QpmB2G1();
    QpmB2G2();
    QpmG2B1();
    QpmG2B2();
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
#ifndef OMITQpm
    printLine("Calling Qpm()...");
    bkQHaVLyxippjUvAOxrT_Qpm();
    printLine("Finished Qpm()");
#endif /* a */
#ifndef OMITUnY
    printLine("Calling UnY()...");
    bkQHaVLyxippjUvAOxrT_UnY();
    printLine("Finished UnY()");
#endif /* a */
    return 0;
}

#endif
