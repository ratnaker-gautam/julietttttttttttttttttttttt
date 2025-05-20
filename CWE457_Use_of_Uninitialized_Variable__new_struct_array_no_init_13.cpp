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
 * */

#include "std_testcase.h"

namespace pQFIcHYArKlnOFTjhQEQ
{

#ifndef OMIThTH

void hTH()
{
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(GLOBAL_CONST_FIVE==5)
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
        /* a a a */
        delete [] data;
    }
}

#endif /* a */

#ifndef OMITrbB

/* a a a a a a a a a a a a a */
static void rbBB2G1()
{
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(GLOBAL_CONST_FIVE!=5)
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
        /* a a a */
        delete [] data;
    }
}

/* a a a a a a a a a a a a a a */
static void rbBB2G2()
{
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(GLOBAL_CONST_FIVE==5)
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
        /* a a a */
        delete [] data;
    }
}

/* a a a a a a a a a a a a a */
static void rbBG2B1()
{
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
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
        /* a a a */
        delete [] data;
    }
}

/* a a a a a a a a a a a a a a */
static void rbBG2B2()
{
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
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
        /* a a a */
        delete [] data;
    }
}

void rbB()
{
    rbBB2G1();
    rbBB2G2();
    rbBG2B1();
    rbBG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace pQFIcHYArKlnOFTjhQEQ; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITrbB
    printLine("Calling rbB()...");
    rbB();
    printLine("Finished rbB()");
#endif /* a */
#ifndef OMIThTH
    printLine("Calling hTH()...");
    hTH();
    printLine("Finished hTH()");
#endif /* a */
    return 0;
}

#endif
