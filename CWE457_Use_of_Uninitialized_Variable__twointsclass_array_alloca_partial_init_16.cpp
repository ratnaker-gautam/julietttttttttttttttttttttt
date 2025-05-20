/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a
 * */

#include "std_testcase.h"

namespace gDKPnnjkSnnIIvCbKmfU
{

#ifndef OMITAuW

void AuW()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    while(1)
    {
        /* a a a a a */
        for(int i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        break;
    }
    while(1)
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
        break;
    }
}

#endif /* a */

#ifndef OMITCeA

/* a a a a a a a a a a a a a a a */
static void CeAB2G()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    while(1)
    {
        /* a a a a a */
        for(int i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        break;
    }
    while(1)
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
        break;
    }
}

/* a a a a a a a a a a a a a a a */
static void CeAG2B()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    while(1)
    {
        /* a a a a */
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        break;
    }
    while(1)
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
        break;
    }
}

void CeA()
{
    CeAB2G();
    CeAG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace gDKPnnjkSnnIIvCbKmfU; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITCeA
    printLine("Calling CeA()...");
    CeA();
    printLine("Finished CeA()");
#endif /* a */
#ifndef OMITAuW
    printLine("Calling AuW()...");
    AuW();
    printLine("Finished AuW()");
#endif /* a */
    return 0;
}

#endif
