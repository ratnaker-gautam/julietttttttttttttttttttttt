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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITwCq

void YIHoXnCAFlsPILKRuMhT_wCq()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        data = 10;
    }
    if(STATIC_CONST_TRUE)
    {
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
}

#endif /* a */

#ifndef OMITVHi

/* a a a a a a a a a a a a a */
static void VHiB2G1()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        data = 10;
    }
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
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
}

/* a a a a a a a a a a a a a a */
static void VHiB2G2()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        data = 10;
    }
    if(STATIC_CONST_TRUE)
    {
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
}

/* a a a a a a a a a a a a a */
static void VHiG2B1()
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
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        data = 7;
    }
    if(STATIC_CONST_TRUE)
    {
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
}

/* a a a a a a a a a a a a a a */
static void VHiG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        data = 7;
    }
    if(STATIC_CONST_TRUE)
    {
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
}

void YIHoXnCAFlsPILKRuMhT_VHi()
{
    VHiB2G1();
    VHiB2G2();
    VHiG2B1();
    VHiG2B2();
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
#ifndef OMITVHi
    printLine("Calling VHi()...");
    YIHoXnCAFlsPILKRuMhT_VHi();
    printLine("Finished VHi()");
#endif /* a */
#ifndef OMITwCq
    printLine("Calling wCq()...");
    YIHoXnCAFlsPILKRuMhT_wCq();
    printLine("Finished wCq()");
#endif /* a */
    return 0;
}

#endif
