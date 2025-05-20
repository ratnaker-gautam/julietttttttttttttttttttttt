/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace xeItZgGcpEMSBkfFZvpS
{

#ifndef OMITFTT

static void FTTSink(char * data)
{
    {
        char dest[50] = "";
        /* a a a a a a a a a a a */
        strcpy(dest, data);
        printLine(data);
        delete [] data;
    }
}

void FTT()
{
    char * data;
    /* a a a a */
    void (*funcPtr) (char *) = FTTSink;
    data = new char[100];
    /* a a a a a a a a a a a a a a a a a a */
    memset(data, 'A', 100-1); /* a a a */
    data[100-1] = '\0'; /* a a */
    /* a a a a */
    funcPtr(data);
}

#endif /* a */

#ifndef OMITpKN

/* a a a a a a a */
static void pKNG2BSink(char * data)
{
    {
        char dest[50] = "";
        /* a a a a a a a a a a a */
        strcpy(dest, data);
        printLine(data);
        delete [] data;
    }
}

static void pKNG2B()
{
    char * data;
    void (*funcPtr) (char *) = pKNG2BSink;
    data = new char[100];
    /* a a a a a a a a a a a a a a a a a a a a */
    memset(data, 'A', 50-1); /* a a a */
    data[50-1] = '\0'; /* a a */
    funcPtr(data);
}

void pKN()
{
    pKNG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace xeItZgGcpEMSBkfFZvpS; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITpKN
    printLine("Calling pKN()...");
    pKN();
    printLine("Finished pKN()");
#endif /* a */
#ifndef OMITFTT
    printLine("Calling FTT()...");
    FTT();
    printLine("Finished FTT()");
#endif /* a */
    return 0;
}

#endif
