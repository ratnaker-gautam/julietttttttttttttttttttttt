/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a
 * a a a
 * a
 *    a a a a a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITrgB

void wlNEHxBHhIKmQVmdcpXm_rgB()
{
    twoIntsStruct * data;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
    }
}

#endif /* a */

#ifndef OMITyWO

/* a a a a a a a a a a a a a */
static void yWOB2G1()
{
    twoIntsStruct * data;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void yWOB2G2()
{
    twoIntsStruct * data;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a */
static void yWOG2B1()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
    }
}

/* a a a a a a a a a a a a a a */
static void yWOG2B2()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a */
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
    }
}

void wlNEHxBHhIKmQVmdcpXm_yWO()
{
    yWOB2G1();
    yWOB2G2();
    yWOG2B1();
    yWOG2B2();
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
#ifndef OMITyWO
    printLine("Calling yWO()...");
    wlNEHxBHhIKmQVmdcpXm_yWO();
    printLine("Finished yWO()");
#endif /* a */
#ifndef OMITrgB
    printLine("Calling rgB()...");
    wlNEHxBHhIKmQVmdcpXm_rgB();
    printLine("Finished rgB()");
#endif /* a */
    return 0;
}

#endif
