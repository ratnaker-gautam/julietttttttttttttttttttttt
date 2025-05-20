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
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace sUpaoayIpLSqBPVfkRTG_wchar_t_memmove_64
{

#ifndef OMITymu

void ymuSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    /* a a a a */
    wchar_t * data = (*dataPtr);
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

#endif /* a */

#ifndef OMITchm

/* a a a a a a a */
void chmG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    /* a a a a */
    wchar_t * data = (*dataPtr);
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

#endif /* a */

} /* a a */
