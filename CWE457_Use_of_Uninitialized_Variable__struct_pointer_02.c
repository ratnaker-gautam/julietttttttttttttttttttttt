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

#include <wchar.h>

#ifndef OMITxga

void CpuHQBzfZYUcLuFcWdeE_xga()
{
    twoIntsStruct * data;
    if(1)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(1)
    {
        /* a a a a a a a */
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}

#endif /* a */

#ifndef OMITHxV

/* a a a a a a a a a a a a a */
static void HxVB2G1()
{
    twoIntsStruct * data;
    if(1)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        /* a a a a a a a a a */
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}

/* a a a a a a a a a a a a a a */
static void HxVB2G2()
{
    twoIntsStruct * data;
    if(1)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(1)
    {
        /* a a a a a a a */
        /* a a a a a a a a a */
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}

/* a a a a a a a a a a a a a */
static void HxVG2B1()
{
    twoIntsStruct * data;
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        /* a a a a a a a a a */
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
    }
    if(1)
    {
        /* a a a a a a a */
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}

/* a a a a a a a a a a a a a a */
static void HxVG2B2()
{
    twoIntsStruct * data;
    if(1)
    {
        /* a a a */
        /* a a a a a a a a a */
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
    }
    if(1)
    {
        /* a a a a a a a */
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}

void CpuHQBzfZYUcLuFcWdeE_HxV()
{
    HxVB2G1();
    HxVB2G2();
    HxVG2B1();
    HxVG2B2();
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
#ifndef OMITHxV
    printLine("Calling HxV()...");
    CpuHQBzfZYUcLuFcWdeE_HxV();
    printLine("Finished HxV()");
#endif /* a */
#ifndef OMITxga
    printLine("Calling xga()...");
    CpuHQBzfZYUcLuFcWdeE_xga();
    printLine("Finished xga()");
#endif /* a */
    return 0;
}

#endif
