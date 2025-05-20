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
 * a a a a a a
 * */

#include "std_testcase.h"

namespace ACKaFWcHMrXZxiAekZaK
{

#ifndef OMITduE

void duE()
{
    TwoIntsClass * data;
    TwoIntsClass dataUninitArray[10];
    data = dataUninitArray;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    else
    {
        /* a a a a */
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
    else
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}

#endif /* a */

#ifndef OMITDcp

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void DcpB2G()
{
    TwoIntsClass * data;
    TwoIntsClass dataUninitArray[10];
    data = dataUninitArray;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    else
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
    else
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void DcpG2B()
{
    TwoIntsClass * data;
    TwoIntsClass dataUninitArray[10];
    data = dataUninitArray;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a */
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    else
    {
        /* a a a a */
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
    else
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}

void Dcp()
{
    DcpB2G();
    DcpG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace ACKaFWcHMrXZxiAekZaK; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITDcp
    printLine("Calling Dcp()...");
    Dcp();
    printLine("Finished Dcp()");
#endif /* a */
#ifndef OMITduE
    printLine("Calling duE()...");
    duE();
    printLine("Finished duE()");
#endif /* a */
    return 0;
}

#endif
