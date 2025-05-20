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
 * a a a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITaCg

#include "std_testcase.h"
#include "FFJgLTSvjocjyZaIteeo_wchar_t_alloca_memcpy_84.h"

namespace FFJgLTSvjocjyZaIteeo_wchar_t_alloca_memcpy_84
{
nmIAiyCHgMgCDzcEncjd::nmIAiyCHgMgCDzcEncjd(wchar_t * dataCopy)
{
    data = dataCopy;
    /* a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 100-1); /* a a a */
    data[100-1] = L'\0'; /* a a */
}

nmIAiyCHgMgCDzcEncjd::~nmIAiyCHgMgCDzcEncjd()
{
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a */
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
    }
}
}
#endif /* a */
