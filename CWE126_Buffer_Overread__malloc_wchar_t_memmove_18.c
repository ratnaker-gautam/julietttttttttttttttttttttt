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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITmiJ

void TyrKnONWFhZVlqmgBHDM_miJ()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    /* a a a a a */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 50-1); /* a a a */
    data[50-1] = L'\0'; /* a a */
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a
         * a a a a a a a a */
        memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}

#endif /* a */

#ifndef OMITcqc

/* a a a a a a a a a a a a a a */
static void cqcG2B()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    /* a a a a a */
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1); /* a a a */
    data[100-1] = L'\0'; /* a a */
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a
         * a a a a a a a a */
        memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}

void TyrKnONWFhZVlqmgBHDM_cqc()
{
    cqcG2B();
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
#ifndef OMITcqc
    printLine("Calling cqc()...");
    TyrKnONWFhZVlqmgBHDM_cqc();
    printLine("Finished cqc()");
#endif /* a */
#ifndef OMITmiJ
    printLine("Calling miJ()...");
    TyrKnONWFhZVlqmgBHDM_miJ();
    printLine("Finished miJ()");
#endif /* a */
    return 0;
}

#endif
