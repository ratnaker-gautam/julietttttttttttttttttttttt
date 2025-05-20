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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITrjO

void vzMzLhoLqpmlKcXQIORI_rjO()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 100-1); /* a a a */
    data[100-1] = L'\0'; /* a a */
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a */
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        free(data);
    }
}

#endif /* a */

#ifndef OMITfgC

/* a a a a a a a */
static void fgCG2B()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* a a a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 50-1); /* a a a */
    data[50-1] = L'\0'; /* a a */
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a */
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        free(data);
    }
}

void vzMzLhoLqpmlKcXQIORI_fgC()
{
    fgCG2B();
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
#ifndef OMITfgC
    printLine("Calling fgC()...");
    vzMzLhoLqpmlKcXQIORI_fgC();
    printLine("Finished fgC()");
#endif /* a */
#ifndef OMITrjO
    printLine("Calling rjO()...");
    vzMzLhoLqpmlKcXQIORI_rjO();
    printLine("Finished rjO()");
#endif /* a */
    return 0;
}

#endif
