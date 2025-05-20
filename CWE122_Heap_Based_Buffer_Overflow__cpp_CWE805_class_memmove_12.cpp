/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a
 *    a a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

namespace DwgDVLFVMnBMCjUwaMMi
{

#ifndef OMITyGb

void yGb()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a a a a a a a a a a a a a */
        data = new TwoIntsClass[50];
    }
    else
    {
        /* a a a a a a a a a a a a a a a a a a a a a a a a a */
        data = new TwoIntsClass[100];
    }
    {
        TwoIntsClass source[100];
        {
            size_t i;
            /* a a */
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        /* a a a a a a a a a */
        memmove(data, source, 100*sizeof(TwoIntsClass));
        printIntLine(data[0].intOne);
        delete [] data;
    }
}

#endif /* a */

#ifndef OMITDuH

/* a a a a a a a a a a a a
   a a a a a */
static void DuHG2B()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a a a a a a a a a a a a a a a a */
        data = new TwoIntsClass[100];
    }
    else
    {
        /* a a a a a a a a a a a a a a a a a a a a a a a a a */
        data = new TwoIntsClass[100];
    }
    {
        TwoIntsClass source[100];
        {
            size_t i;
            /* a a */
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        /* a a a a a a a a a */
        memmove(data, source, 100*sizeof(TwoIntsClass));
        printIntLine(data[0].intOne);
        delete [] data;
    }
}

void DuH()
{
    DuHG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace DwgDVLFVMnBMCjUwaMMi; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITDuH
    printLine("Calling DuH()...");
    DuH();
    printLine("Finished DuH()");
#endif /* a */
#ifndef OMITyGb
    printLine("Calling yGb()...");
    yGb();
    printLine("Finished yGb()");
#endif /* a */
    return 0;
}

#endif
