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

#ifndef OMITVBV

void ERWniACuvrWyaqSeCQxz_VBVSink(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a */
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        free(data);
    }
}

void ERWniACuvrWyaqSeCQxz_VBV()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 100-1); /* a a a */
    data[100-1] = L'\0'; /* a a */
    ERWniACuvrWyaqSeCQxz_VBVSink(data);
}

#endif /* a */

#ifndef OMITrXZ

void ERWniACuvrWyaqSeCQxz_rXZG2BSink(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        /* a a a a a a a a a a a */
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        free(data);
    }
}

/* a a a a a a a */
static void rXZG2B()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* a a a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 50-1); /* a a a */
    data[50-1] = L'\0'; /* a a */
    ERWniACuvrWyaqSeCQxz_rXZG2BSink(data);
}

void ERWniACuvrWyaqSeCQxz_rXZ()
{
    rXZG2B();
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
#ifndef OMITrXZ
    printLine("Calling rXZ()...");
    ERWniACuvrWyaqSeCQxz_rXZ();
    printLine("Finished rXZ()");
#endif /* a */
#ifndef OMITVBV
    printLine("Calling VBV()...");
    ERWniACuvrWyaqSeCQxz_VBV();
    printLine("Finished VBV()");
#endif /* a */
    return 0;
}

#endif
