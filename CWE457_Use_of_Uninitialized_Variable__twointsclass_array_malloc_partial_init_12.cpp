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

namespace RkzIgDlaKLeLphfppphr
{

#ifndef OMITevc

void evc()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        for(int i=0; i<(10/2); i++)
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

#ifndef OMITakq

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void akqB2G()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        for(int i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    else
    {
        /* a a a a a */
        for(int i=0; i<(10/2); i++)
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
static void akqG2B()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
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

void akq()
{
    akqB2G();
    akqG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace RkzIgDlaKLeLphfppphr; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITakq
    printLine("Calling akq()...");
    akq();
    printLine("Finished akq()");
#endif /* a */
#ifndef OMITevc
    printLine("Calling evc()...");
    evc();
    printLine("Finished evc()");
#endif /* a */
    return 0;
}

#endif
