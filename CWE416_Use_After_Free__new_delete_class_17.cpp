/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a a a a
 * a a a a a a a a a
 * a
 *    a a a
 *    a a a a a a
 * a a a a a a a
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace qhTuDfhUQlJqvludFMAI
{

#ifndef OMITger

void ger()
{
    int i,j;
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    for(j = 0; j < 1; j++)
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITqcn

/* a a a a a a a a a a */
static void qcnB2G()
{
    int i,k;
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    for(k = 0; k < 1; k++)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a */
static void qcnG2B()
{
    int h,j;
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        /* a a a a a a a a */
    }
    for(j = 0; j < 1; j++)
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a */
    }
}

void qcn()
{
    qcnB2G();
    qcnG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace qhTuDfhUQlJqvludFMAI; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITqcn
    printLine("Calling qcn()...");
    qcn();
    printLine("Finished qcn()");
#endif /* a */
#ifndef OMITger
    printLine("Calling ger()...");
    ger();
    printLine("Finished ger()");
#endif /* a */
    return 0;
}

#endif
