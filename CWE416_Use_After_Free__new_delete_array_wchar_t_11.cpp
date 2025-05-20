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
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace qFvcVAzWoJRtiwFzwTHC
{

#ifndef OMITrVQ

void rVQ()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        printWLine(data);
        /* a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITCbD

/* a a a a a a a a a a a a a */
static void CbDB2G1()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(globalReturnsFalse())
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
static void CbDB2G2()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void CbDG2B1()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a */
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        printWLine(data);
        /* a a a a a a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void CbDG2B2()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a */
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        printWLine(data);
        /* a a a a a a a a a a a a */
    }
}

void CbD()
{
    CbDB2G1();
    CbDB2G2();
    CbDG2B1();
    CbDG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace qFvcVAzWoJRtiwFzwTHC; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITCbD
    printLine("Calling CbD()...");
    CbD();
    printLine("Finished CbD()");
#endif /* a */
#ifndef OMITrVQ
    printLine("Calling rVQ()...");
    rVQ();
    printLine("Finished rVQ()");
#endif /* a */
    return 0;
}

#endif
