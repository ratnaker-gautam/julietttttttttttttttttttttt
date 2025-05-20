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
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"
#include <list>

#include <wchar.h>

using namespace std;

namespace bREyaplUJLiokFSTKYmm_wchar_t_ncpy_73
{

#ifndef OMITsBI

void sBISink(list<wchar_t *> dataList)
{
    /* a a a a a */
    wchar_t * data = dataList.back();
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a */
        wcsncpy(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        delete [] data;
    }
}

#endif /* a */

#ifndef OMITayn

/* a a a a a a a */
void aynG2BSink(list<wchar_t *> dataList)
{
    wchar_t * data = dataList.back();
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a */
        wcsncpy(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        delete [] data;
    }
}

#endif /* a */

} /* a a */
