/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITQZI

void WzELQJrJhbRzMfTHcgxw_QZI()
{
    twoIntsStruct * data;
    twoIntsStruct dataUninitArray[10];
    data = dataUninitArray;
    if(globalTrue)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(globalTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

#endif /* a */

#ifndef OMITIcX

/* a a a a a a a a a a a a a */
static void IcXB2G1()
{
    twoIntsStruct * data;
    twoIntsStruct dataUninitArray[10];
    data = dataUninitArray;
    if(globalTrue)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void IcXB2G2()
{
    twoIntsStruct * data;
    twoIntsStruct dataUninitArray[10];
    data = dataUninitArray;
    if(globalTrue)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(globalTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void IcXG2B1()
{
    twoIntsStruct * data;
    twoIntsStruct dataUninitArray[10];
    data = dataUninitArray;
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
    }
    if(globalTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void IcXG2B2()
{
    twoIntsStruct * data;
    twoIntsStruct dataUninitArray[10];
    data = dataUninitArray;
    if(globalTrue)
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
    }
    if(globalTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

void WzELQJrJhbRzMfTHcgxw_IcX()
{
    IcXB2G1();
    IcXB2G2();
    IcXG2B1();
    IcXG2B2();
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
#ifndef OMITIcX
    printLine("Calling IcX()...");
    WzELQJrJhbRzMfTHcgxw_IcX();
    printLine("Finished IcX()");
#endif /* a */
#ifndef OMITQZI
    printLine("Calling QZI()...");
    WzELQJrJhbRzMfTHcgxw_QZI();
    printLine("Finished QZI()");
#endif /* a */
    return 0;
}

#endif
