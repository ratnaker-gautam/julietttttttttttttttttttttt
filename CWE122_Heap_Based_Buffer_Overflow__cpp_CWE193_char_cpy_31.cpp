/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a a a
 * a a a a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a */
#define SRC_STRING "AAAAAAAAAA"

namespace FAFIhUfOsfvoqoCPlmyb
{

#ifndef OMITRRY

void RRY()
{
    char * data;
    data = NULL;
    /* a a a a a a a a a */
    data = new char[10];
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char source[10+1] = SRC_STRING;
            /* a a a a a a a a a a a */
            strcpy(data, source);
            printLine(data);
            delete [] data;
        }
    }
}

#endif /* a */

#ifndef OMITCma

/* a a a a a a a */
static void CmaG2B()
{
    char * data;
    data = NULL;
    /* a a a a a a a */
    data = new char[10+1];
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char source[10+1] = SRC_STRING;
            /* a a a a a a a a a a a */
            strcpy(data, source);
            printLine(data);
            delete [] data;
        }
    }
}

void Cma()
{
    CmaG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace FAFIhUfOsfvoqoCPlmyb; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITCma
    printLine("Calling Cma()...");
    Cma();
    printLine("Finished Cma()");
#endif /* a */
#ifndef OMITRRY
    printLine("Calling RRY()...");
    RRY();
    printLine("Finished RRY()");
#endif /* a */
    return 0;
}

#endif
