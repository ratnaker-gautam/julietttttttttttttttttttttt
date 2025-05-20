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
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

namespace jzYQLLstiuZNohHWKfvD
{

static int * CNfData;
static int * tCaG2BData;
static int * tCaB2GData;

#ifndef OMITCNf

static void CNfSink()
{
    int * data = CNfData;
    /* a a a a */
    ; /* a a a a a a a */
}

void CNf()
{
    int * data;
    data = NULL;
    /* a a a a a a a */
    data = new int;
    /* a a a a a a */
    *data = 5;
    printIntLine(*data);
    CNfData = data;
    CNfSink();
}

#endif /* a */

#ifndef OMITtCa

/* a a a a a a a */
static void tCaG2BSink()
{
    int * data = tCaG2BData;
    /* a a a a */
    ; /* a a a a a a a */
}

static void tCaG2B()
{
    int * data;
    data = NULL;
    /* a a a a a a a */
    int datatCaBuffer;
    data = &datatCaBuffer;
    /* a a a a a a */
    *data = 5;
    printIntLine(*data);
    tCaG2BData = data;
    tCaG2BSink();
}

/* a a a a a a a */
static void tCaB2GSink()
{
    int * data = tCaB2GData;
    /* a a a */
    delete data;
}

static void tCaB2G()
{
    int * data;
    data = NULL;
    /* a a a a a a a */
    data = new int;
    /* a a a a a a */
    *data = 5;
    printIntLine(*data);
    tCaB2GData = data;
    tCaB2GSink();
}

void tCa()
{
    tCaG2B();
    tCaB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace jzYQLLstiuZNohHWKfvD; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITtCa
    printLine("Calling tCa()...");
    tCa();
    printLine("Finished tCa()");
#endif /* a */
#ifndef OMITCNf
    printLine("Calling CNf()...");
    CNf();
    printLine("Finished CNf()");
#endif /* a */
    return 0;
}

#endif
