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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITWiX

void TFcxxXmveIqpGGUhDVIw_WiXSink(wchar_t * data)
{
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

void TFcxxXmveIqpGGUhDVIw_WiX()
{
    wchar_t * data;
    data = NULL;
    /* a a a a a */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 50-1); /* a a a */
    data[50-1] = L'\0'; /* a a */
    TFcxxXmveIqpGGUhDVIw_WiXSink(data);
}

#endif /* a */

#ifndef OMITZvK

void TFcxxXmveIqpGGUhDVIw_ZvKG2BSink(wchar_t * data)
{
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

/* a a a a a a a */
static void ZvKG2B()
{
    wchar_t * data;
    data = NULL;
    /* a a a a a */
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1); /* a a a */
    data[100-1] = L'\0'; /* a a */
    TFcxxXmveIqpGGUhDVIw_ZvKG2BSink(data);
}

void TFcxxXmveIqpGGUhDVIw_ZvK()
{
    ZvKG2B();
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
#ifndef OMITZvK
    printLine("Calling ZvK()...");
    TFcxxXmveIqpGGUhDVIw_ZvK();
    printLine("Finished ZvK()");
#endif /* a */
#ifndef OMITWiX
    printLine("Calling WiX()...");
    TFcxxXmveIqpGGUhDVIw_WiX();
    printLine("Finished WiX()");
#endif /* a */
    return 0;
}

#endif
