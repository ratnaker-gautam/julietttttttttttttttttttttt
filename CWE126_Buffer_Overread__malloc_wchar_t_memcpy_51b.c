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

/* a a a a a a a a a a a a a a a a a a a a */

#ifndef OMITFNZ

void MqrtvPtSFAwlKoFEMdOv_FNZSink(wchar_t * data)
{
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a
         * a a a a a a a a */
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}

#endif /* a */

#ifndef OMITXei

/* a a a a a a a */
void MqrtvPtSFAwlKoFEMdOv_XeiG2BSink(wchar_t * data)
{
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a
         * a a a a a a a a */
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}

#endif /* a */
