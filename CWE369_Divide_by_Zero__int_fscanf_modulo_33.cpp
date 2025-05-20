/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a
 * a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace zzBYdMKQoqfvIKJMrCPw
{

#ifndef OMITOOM

void OOM()
{
    int data;
    int &dataRef = data;
    /* a a */
    data = -1;
    /* a a a a a a a a a */
    fscanf(stdin, "%d", &data);
    {
        int data = dataRef;
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

#endif /* a */

#ifndef OMITCAz

/* a a a a a a a */
static void CAzG2B()
{
    int data;
    int &dataRef = data;
    /* a a */
    data = -1;
    /* a a a a a a a a */
    data = 7;
    {
        int data = dataRef;
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

/* a a a a a a a */
static void CAzB2G()
{
    int data;
    int &dataRef = data;
    /* a a */
    data = -1;
    /* a a a a a a a a a */
    fscanf(stdin, "%d", &data);
    {
        int data = dataRef;
        /* a a a a a a */
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}

void CAz()
{
    CAzG2B();
    CAzB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace zzBYdMKQoqfvIKJMrCPw; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITCAz
    printLine("Calling CAz()...");
    CAz();
    printLine("Finished CAz()");
#endif /* a */
#ifndef OMITOOM
    printLine("Calling OOM()...");
    OOM();
    printLine("Finished OOM()");
#endif /* a */
    return 0;
}

#endif
