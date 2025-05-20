/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a
 *    a a a a a a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITJyD

void CBYEgLhqVZJfDWKYBPmg_JyD()
{
    int data;
    /* a a */
    data = -1;
    goto source;
source:
    /* a a a a a a */
    data = 10;
    goto sink;
sink:
    {
        int i;
        int buffer[10] = { 0 };
        /* a a a a a a a a a a a a a a a a a
        * a a a a a a a a a a a a */
        if (data >= 0)
        {
            buffer[data] = 1;
            /* a a a a */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
    }
}

#endif /* a */

#ifndef OMITJRW

/* a a a a a a a a a a a a a a a */
static void JRWB2G()
{
    int data;
    /* a a */
    data = -1;
    goto source;
source:
    /* a a a a a a */
    data = 10;
    goto sink;
sink:
    {
        int i;
        int buffer[10] = { 0 };
        /* a a a a a a a a a a a */
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            /* a a a a */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}

/* a a a a a a a a a a a a a a a */
static void JRWG2B()
{
    int data;
    /* a a */
    data = -1;
    goto source;
source:
    /* a a a a a a a a a a a a a a a
     * a a a a a a a a a a a a */
    data = 7;
    goto sink;
sink:
    {
        int i;
        int buffer[10] = { 0 };
        /* a a a a a a a a a a a a a a a a a
        * a a a a a a a a a a a a */
        if (data >= 0)
        {
            buffer[data] = 1;
            /* a a a a */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
    }
}

void CBYEgLhqVZJfDWKYBPmg_JRW()
{
    JRWB2G();
    JRWG2B();
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
#ifndef OMITJRW
    printLine("Calling JRW()...");
    CBYEgLhqVZJfDWKYBPmg_JRW();
    printLine("Finished JRW()");
#endif /* a */
#ifndef OMITJyD
    printLine("Calling JyD()...");
    CBYEgLhqVZJfDWKYBPmg_JyD();
    printLine("Finished JyD()");
#endif /* a */
    return 0;
}

#endif
