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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace EDZpdbbWBgDrxLDtGAqO
{

#ifndef OMITQCP

void QCP()
{
    char * data;
    /* a a */
    data = NULL;
    if(5==5)
    {
        data = new char;
        *data = 'A';
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        printHexCharLine(*data);
        /* a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITMBR

/* a a a a a a a a a a a a a */
static void MBRB2G1()
{
    char * data;
    /* a a */
    data = NULL;
    if(5==5)
    {
        data = new char;
        *data = 'A';
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void MBRB2G2()
{
    char * data;
    /* a a */
    data = NULL;
    if(5==5)
    {
        data = new char;
        *data = 'A';
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void MBRG2B1()
{
    char * data;
    /* a a */
    data = NULL;
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
        *data = 'A';
        /* a a a a a a a a */
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        printHexCharLine(*data);
        /* a a a a a a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void MBRG2B2()
{
    char * data;
    /* a a */
    data = NULL;
    if(5==5)
    {
        data = new char;
        *data = 'A';
        /* a a a a a a a a */
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        printHexCharLine(*data);
        /* a a a a a a a a a a a a */
    }
}

void MBR()
{
    MBRB2G1();
    MBRB2G2();
    MBRG2B1();
    MBRG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace EDZpdbbWBgDrxLDtGAqO; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITMBR
    printLine("Calling MBR()...");
    MBR();
    printLine("Finished MBR()");
#endif /* a */
#ifndef OMITQCP
    printLine("Calling QCP()...");
    QCP();
    printLine("Finished QCP()");
#endif /* a */
    return 0;
}

#endif
