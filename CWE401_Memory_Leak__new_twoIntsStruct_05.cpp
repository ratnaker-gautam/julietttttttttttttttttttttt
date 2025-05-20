/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a
 * a a a a a a
 * a
 *    a a a a a
 *    a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

namespace KBeYYTyfbvTBlUpvCVWG
{

#ifndef OMITVgY

void VgY()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        /* a a a a a a a */
        data = new twoIntsStruct;
        /* a a a a a a */
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
    }
    if(staticTrue)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITJjh

/* a a a a a a a a a a a a a */
static void JjhB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        /* a a a a a a a */
        data = new twoIntsStruct;
        /* a a a a a a */
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
    }
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        delete data;
    }
}

/* a a a a a a a a a a a a a a */
static void JjhB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        /* a a a a a a a */
        data = new twoIntsStruct;
        /* a a a a a a */
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
    }
    if(staticTrue)
    {
        /* a a a */
        delete data;
    }
}

/* a a a a a a a a a a a a a */
static void JjhG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        twoIntsStruct dataJjhBuffer;
        data = &dataJjhBuffer;
        /* a a a a a a */
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
    }
    if(staticTrue)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void JjhG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        /* a a a a a a a */
        twoIntsStruct dataJjhBuffer;
        data = &dataJjhBuffer;
        /* a a a a a a */
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
    }
    if(staticTrue)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

void Jjh()
{
    JjhB2G1();
    JjhB2G2();
    JjhG2B1();
    JjhG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace KBeYYTyfbvTBlUpvCVWG; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITJjh
    printLine("Calling Jjh()...");
    Jjh();
    printLine("Finished Jjh()");
#endif /* a */
#ifndef OMITVgY
    printLine("Calling VgY()...");
    VgY();
    printLine("Finished VgY()");
#endif /* a */
    return 0;
}

#endif
