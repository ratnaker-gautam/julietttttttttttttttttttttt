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

namespace xZQFbKoGbGxhpbBJpvzU
{

#ifndef OMITVbg

void Vbg()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}

#endif /* a */

#ifndef OMITaEW

/* a a a a a a a a a a a a a */
static void aEWB2G1()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
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

/* a a a a a a a a a a a a a a */
static void aEWB2G2()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(GLOBAL_CONST_TRUE)
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

/* a a a a a a a a a a a a a */
static void aEWG2B1()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
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
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void aEWG2B2()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a */
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}

void aEW()
{
    aEWB2G1();
    aEWB2G2();
    aEWG2B1();
    aEWG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace xZQFbKoGbGxhpbBJpvzU; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITaEW
    printLine("Calling aEW()...");
    aEW();
    printLine("Finished aEW()");
#endif /* a */
#ifndef OMITVbg
    printLine("Calling Vbg()...");
    Vbg();
    printLine("Finished Vbg()");
#endif /* a */
    return 0;
}

#endif
