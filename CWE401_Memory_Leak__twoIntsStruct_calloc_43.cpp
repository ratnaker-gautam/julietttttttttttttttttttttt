/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a
 * a a a a a a
 * a
 *    a a a a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace dCcZAoFINPRfgYgJfbQT
{

#ifndef OMITiOH

static void iOHSource(twoIntsStruct * &data)
{
    /* a a a a a a a */
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    /* a a a a a a */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
}

void iOH()
{
    twoIntsStruct * data;
    data = NULL;
    iOHSource(data);
    /* a a a a */
    ; /* a a a a a a a */
}

#endif /* a */

#ifndef OMITKsX

/* a a a a a a a */
static void KsXG2BSource(twoIntsStruct * &data)
{
    /* a a a a a a a a a */
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    /* a a a a a a */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
}

static void KsXG2B()
{
    twoIntsStruct * data;
    data = NULL;
    KsXG2BSource(data);
    /* a a a a */
    ; /* a a a a a a a */
}

/* a a a a a a a */
static void KsXB2GSource(twoIntsStruct * &data)
{
    /* a a a a a a a */
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    /* a a a a a a */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
}

static void KsXB2G()
{
    twoIntsStruct * data;
    data = NULL;
    KsXB2GSource(data);
    /* a a a */
    free(data);
}

void KsX()
{
    KsXG2B();
    KsXB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace dCcZAoFINPRfgYgJfbQT; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITKsX
    printLine("Calling KsX()...");
    KsX();
    printLine("Finished KsX()");
#endif /* a */
#ifndef OMITiOH
    printLine("Calling iOH()...");
    iOH();
    printLine("Finished iOH()");
#endif /* a */
    return 0;
}

#endif
