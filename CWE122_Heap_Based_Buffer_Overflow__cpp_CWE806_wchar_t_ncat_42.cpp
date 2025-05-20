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
 * a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace SDVLZlXtPZWGAKlDbBlr
{

#ifndef OMITDgD

static wchar_t * DgDSource(wchar_t * data)
{
    /* a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 100-1); /* a a a */
    data[100-1] = L'\0'; /* a a */
    return data;
}

void DgD()
{
    wchar_t * data;
    data = new wchar_t[100];
    data = DgDSource(data);
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a*/
        wcsncat(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        delete [] data;
    }
}

#endif /* a */

#ifndef OMITWvS

static wchar_t * WvSG2BSource(wchar_t * data)
{
    /* a a a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 50-1); /* a a a */
    data[50-1] = L'\0'; /* a a */
    return data;
}

/* a a a a a a a */
static void WvSG2B()
{
    wchar_t * data;
    data = new wchar_t[100];
    data = WvSG2BSource(data);
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a*/
        wcsncat(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        delete [] data;
    }
}

void WvS()
{
    WvSG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace SDVLZlXtPZWGAKlDbBlr; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITWvS
    printLine("Calling WvS()...");
    WvS();
    printLine("Finished WvS()");
#endif /* a */
#ifndef OMITDgD
    printLine("Calling DgD()...");
    DgD();
    printLine("Finished DgD()");
#endif /* a */
    return 0;
}

#endif
