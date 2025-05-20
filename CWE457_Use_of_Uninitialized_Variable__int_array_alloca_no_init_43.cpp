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
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace JHPADuqiqvtdKdtEcPtf
{

#ifndef OMITrwF

static void rwFSource(int * &data)
{
    /* a a a a a */
    ; /* a a a a a a a */
}

void rwF()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    rwFSource(data);
    /* a a a a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}

#endif /* a */

#ifndef OMITCmG

/* a a a a a a a */
static void CmGG2BSource(int * &data)
{
    /* a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
}

static void CmGG2B()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    CmGG2BSource(data);
    /* a a a a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}

/* a a a a a a a */
static void CmGB2GSource(int * &data)
{
    /* a a a a a */
    ; /* a a a a a a a */
}

static void CmGB2G()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    CmGB2GSource(data);
    /* a a a a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}

void CmG()
{
    CmGG2B();
    CmGB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace JHPADuqiqvtdKdtEcPtf; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITCmG
    printLine("Calling CmG()...");
    CmG();
    printLine("Finished CmG()");
#endif /* a */
#ifndef OMITrwF
    printLine("Calling rwF()...");
    rwF();
    printLine("Finished rwF()");
#endif /* a */
    return 0;
}

#endif
