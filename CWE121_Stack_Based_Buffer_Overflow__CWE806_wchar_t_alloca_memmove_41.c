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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITobi

void BMkSEJgmJtQuoBAWlhUo_obiSink(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a */
        memmove(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
    }
}

void BMkSEJgmJtQuoBAWlhUo_obi()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    /* a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 100-1); /* a a a */
    data[100-1] = L'\0'; /* a a */
    BMkSEJgmJtQuoBAWlhUo_obiSink(data);
}

#endif /* a */

#ifndef OMITnyE

void BMkSEJgmJtQuoBAWlhUo_nyEG2BSink(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a */
        memmove(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
    }
}

/* a a a a a a a */
static void nyEG2B()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    /* a a a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 50-1); /* a a a */
    data[50-1] = L'\0'; /* a a */
    BMkSEJgmJtQuoBAWlhUo_nyEG2BSink(data);
}

void BMkSEJgmJtQuoBAWlhUo_nyE()
{
    nyEG2B();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITnyE
    printLine("Calling nyE()...");
    BMkSEJgmJtQuoBAWlhUo_nyE();
    printLine("Finished nyE()");
#endif /* a */
#ifndef OMITobi
    printLine("Calling obi()...");
    BMkSEJgmJtQuoBAWlhUo_obi();
    printLine("Finished obi()");
#endif /* a */
    return 0;
}

#endif
