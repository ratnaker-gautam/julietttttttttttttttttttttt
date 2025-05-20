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
 * a a a a
 *
 * */

#include "std_testcase.h"

namespace kdXjIUTAauToRlzMfQaS
{

#ifndef OMITMLW

void MLW()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    /* a a a a a */
    ; /* a a a a a a a */
    /* a a a a a a a */
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}

#endif /* a */

#ifndef OMITQqe

/* a a a a a a a */
static void QqeG2B()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    /* a a a a */
    for(int i=0; i<10; i++)
    {
        data[i].intOne = i;
        data[i].intTwo = i;
    }
    /* a a a a a a a */
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}

/* a a a a a a a */
static void QqeB2G()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    /* a a a a a */
    ; /* a a a a a a a */
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

void Qqe()
{
    QqeG2B();
    QqeB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace kdXjIUTAauToRlzMfQaS; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITQqe
    printLine("Calling Qqe()...");
    Qqe();
    printLine("Finished Qqe()");
#endif /* a */
#ifndef OMITMLW
    printLine("Calling MLW()...");
    MLW();
    printLine("Finished MLW()");
#endif /* a */
    return 0;
}

#endif
