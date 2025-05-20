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
 * a a a a a a a a
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

namespace xLYIkodioLJTWAgxCkIB
{

#ifndef OMITXWJ

void XWJ()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        /* a a a a a a a */
        data = new int[100];
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(globalFive==5)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITKuu

/* a a a a a a a a a a a a a */
static void KuuB2G1()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        /* a a a a a a a */
        data = new int[100];
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        delete[] data;
    }
}

/* a a a a a a a a a a a a a a */
static void KuuB2G2()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        /* a a a a a a a */
        data = new int[100];
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(globalFive==5)
    {
        /* a a a */
        delete[] data;
    }
}

/* a a a a a a a a a a a a a */
static void KuuG2B1()
{
    int * data;
    data = NULL;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        int dataKuuBuffer[100];
        data = dataKuuBuffer;
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(globalFive==5)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void KuuG2B2()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        /* a a a a a a a */
        int dataKuuBuffer[100];
        data = dataKuuBuffer;
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(globalFive==5)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

void Kuu()
{
    KuuB2G1();
    KuuB2G2();
    KuuG2B1();
    KuuG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace xLYIkodioLJTWAgxCkIB; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITKuu
    printLine("Calling Kuu()...");
    Kuu();
    printLine("Finished Kuu()");
#endif /* a */
#ifndef OMITXWJ
    printLine("Calling XWJ()...");
    XWJ();
    printLine("Finished XWJ()");
#endif /* a */
    return 0;
}

#endif
