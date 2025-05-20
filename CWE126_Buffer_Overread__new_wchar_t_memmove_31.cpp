/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a
 * a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace JCexViYRjRlMatZTHLAm
{

#ifndef OMITSKZ

void SKZ()
{
    wchar_t * data;
    data = NULL;
    /* a a a a a */
    data = new wchar_t[50];
    wmemset(data, L'A', 50-1); /* a a a */
    data[50-1] = L'\0'; /* a a */
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1);
            dest[100-1] = L'\0'; /* a a */
            /* a a a a a a a a a a a a
             * a a a a a a a a */
            memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
            dest[100-1] = L'\0';
            printWLine(dest);
            delete [] data;
        }
    }
}

#endif /* a */

#ifndef OMITnGg

/* a a a a a a a */
static void nGgG2B()
{
    wchar_t * data;
    data = NULL;
    /* a a a a a */
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); /* a a a */
    data[100-1] = L'\0'; /* a a */
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1);
            dest[100-1] = L'\0'; /* a a */
            /* a a a a a a a a a a a a
             * a a a a a a a a */
            memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
            dest[100-1] = L'\0';
            printWLine(dest);
            delete [] data;
        }
    }
}

void nGg()
{
    nGgG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace JCexViYRjRlMatZTHLAm; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITnGg
    printLine("Calling nGg()...");
    nGg();
    printLine("Finished nGg()");
#endif /* a */
#ifndef OMITSKZ
    printLine("Calling SKZ()...");
    SKZ();
    printLine("Finished SKZ()");
#endif /* a */
    return 0;
}

#endif
