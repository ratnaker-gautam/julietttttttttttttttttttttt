/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a
 *    a a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITjND

void AGjjTSRKOdxdLTbjQzyi_jND()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a a a a a a a a a a a */
        data = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        data[0] = L'\0'; /* a a */
    }
    else
    {
        /* a a a a a a a a a a a a a a a a a a a a a a a */
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        data[0] = L'\0'; /* a a */
    }
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a */
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        free(data);
    }
}

#endif /* a */

#ifndef OMITXTC

/* a a a a a a a a a a a a
 * a a a a a */
static void XTCG2B()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a a a a a a a a a a a a a a */
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        data[0] = L'\0'; /* a a */
    }
    else
    {
        /* a a a a a a a a a a a a a a a a a a a a a a a */
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        data[0] = L'\0'; /* a a */
    }
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a */
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        free(data);
    }
}

void AGjjTSRKOdxdLTbjQzyi_XTC()
{
    XTCG2B();
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
#ifndef OMITXTC
    printLine("Calling XTC()...");
    AGjjTSRKOdxdLTbjQzyi_XTC();
    printLine("Finished XTC()");
#endif /* a */
#ifndef OMITjND
    printLine("Calling jND()...");
    AGjjTSRKOdxdLTbjQzyi_jND();
    printLine("Finished jND()");
#endif /* a */
    return 0;
}

#endif
