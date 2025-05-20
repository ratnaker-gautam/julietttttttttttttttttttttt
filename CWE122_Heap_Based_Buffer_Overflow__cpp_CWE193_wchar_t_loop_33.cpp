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
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a */
#define SRC_STRING L"AAAAAAAAAA"

namespace huVROJylfvFZayOjjgyx
{

#ifndef OMITaMz

void aMz()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    /* a a a a a a a a a */
    data = new wchar_t[10];
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[10+1] = SRC_STRING;
            size_t i, sourceLen;
            sourceLen = wcslen(source);
            /* a a a a a a a a a a */
            /* a a a a a a a a a a a */
            for (i = 0; i < sourceLen + 1; i++)
            {
                data[i] = source[i];
            }
            printWLine(data);
            delete [] data;
        }
    }
}

#endif /* a */

#ifndef OMITDwH

/* a a a a a a a */
static void DwHG2B()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    /* a a a a a a a */
    data = new wchar_t[10+1];
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[10+1] = SRC_STRING;
            size_t i, sourceLen;
            sourceLen = wcslen(source);
            /* a a a a a a a a a a */
            /* a a a a a a a a a a a */
            for (i = 0; i < sourceLen + 1; i++)
            {
                data[i] = source[i];
            }
            printWLine(data);
            delete [] data;
        }
    }
}

void DwH()
{
    DwHG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace huVROJylfvFZayOjjgyx; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITDwH
    printLine("Calling DwH()...");
    DwH();
    printLine("Finished DwH()");
#endif /* a */
#ifndef OMITaMz
    printLine("Calling aMz()...");
    aMz();
    printLine("Finished aMz()");
#endif /* a */
    return 0;
}

#endif
