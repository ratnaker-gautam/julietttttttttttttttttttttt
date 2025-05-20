/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a
 * a a a a a a a
 * a
 *    a a a a a
 *    a a a a a a
 * a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

namespace dYCYQJErliKPXhMyRLaF
{

#ifndef OMITvOM

void vOM()
{
    struct _twoIntsStruct * data;
    data = NULL;
    /* a a a a a a a */
    data = new struct _twoIntsStruct[100];
    /* a a a a a a */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    {
        struct _twoIntsStruct * dataCopy = data;
        struct _twoIntsStruct * data = dataCopy;
        /* a a a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITVKI

/* a a a a a a a */
static void VKIG2B()
{
    struct _twoIntsStruct * data;
    data = NULL;
    /* a a a a a a a */
    struct _twoIntsStruct dataVKIBuffer[100];
    data = dataVKIBuffer;
    /* a a a a a a */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    {
        struct _twoIntsStruct * dataCopy = data;
        struct _twoIntsStruct * data = dataCopy;
        /* a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a */
static void VKIB2G()
{
    struct _twoIntsStruct * data;
    data = NULL;
    /* a a a a a a a */
    data = new struct _twoIntsStruct[100];
    /* a a a a a a */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    {
        struct _twoIntsStruct * dataCopy = data;
        struct _twoIntsStruct * data = dataCopy;
        /* a a a */
        delete[] data;
    }
}

void VKI()
{
    VKIG2B();
    VKIB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace dYCYQJErliKPXhMyRLaF; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITVKI
    printLine("Calling VKI()...");
    VKI();
    printLine("Finished VKI()");
#endif /* a */
#ifndef OMITvOM
    printLine("Calling vOM()...");
    vOM();
    printLine("Finished vOM()");
#endif /* a */
    return 0;
}

#endif
