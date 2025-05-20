/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a a a a a
 * a a a a a
 * a
 *    a a a
 *    a a a a a a
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace gnnROWbFDpWXpExmHlCi
{

#ifndef OMITyEm

static void yEmSink(int * data)
{
    /* a a a a a a */
    delete [] data;
}

void yEm()
{
    int * data;
    /* a a a a */
    void (*funcPtr) (int *) = yEmSink;
    /* a a */
    data = NULL;
    data = new int[100];
    /* a a a a a a a a a a a a a a a a a a a */
    delete [] data;
    /* a a a a */
    funcPtr(data);
}

#endif /* a */

#ifndef OMIThKR

/* a a a a a a a */
static void hKRG2BSink(int * data)
{
    /* a a a a a a */
    delete [] data;
}

static void hKRG2B()
{
    int * data;
    void (*funcPtr) (int *) = hKRG2BSink;
    /* a a */
    data = NULL;
    data = new int[100];
    /* a a a a a a a a a a a a a a a a a a */
    funcPtr(data);
}

/* a a a a a a a */
static void hKRB2GSink(int * data)
{
    /* a a */
    /* a a a a a a a */
    ; /* a a a a a a a */
}

static void hKRB2G()
{
    int * data;
    void (*funcPtr) (int *) = hKRB2GSink;
    /* a a */
    data = NULL;
    data = new int[100];
    /* a a a a a a a a a a a a a a a a a a a */
    delete [] data;
    funcPtr(data);
}

void hKR()
{
    hKRG2B();
    hKRB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace gnnROWbFDpWXpExmHlCi; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMIThKR
    printLine("Calling hKR()...");
    hKR();
    printLine("Finished hKR()");
#endif /* a */
#ifndef OMITyEm
    printLine("Calling yEm()...");
    yEm();
    printLine("Finished yEm()");
#endif /* a */
    return 0;
}

#endif
