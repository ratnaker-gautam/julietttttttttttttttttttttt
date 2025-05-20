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
 *    a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

static wchar_t * VLDdveDhTVqzApgrzoJn_gmBData;
static wchar_t * VLDdveDhTVqzApgrzoJn_aGDG2BData;

#ifndef OMITgmB

static void gmBSink()
{
    wchar_t * data = VLDdveDhTVqzApgrzoJn_gmBData;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a */
        memcpy(data, source, 100*sizeof(wchar_t));
        data[100-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        free(data);
    }
}

void VLDdveDhTVqzApgrzoJn_gmB()
{
    wchar_t * data;
    data = NULL;
    /* a a a a a a a a a a a a a a a a a a a a */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0'; /* a a */
    VLDdveDhTVqzApgrzoJn_gmBData = data;
    gmBSink();
}

#endif /* a */

#ifndef OMITaGD

/* a a a a a a a */
static void aGDG2BSink()
{
    wchar_t * data = VLDdveDhTVqzApgrzoJn_aGDG2BData;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a */
        memcpy(data, source, 100*sizeof(wchar_t));
        data[100-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
        free(data);
    }
}

static void aGDG2B()
{
    wchar_t * data;
    data = NULL;
    /* a a a a a a a a a a a a a a a a a a a a a a a */
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0'; /* a a */
    VLDdveDhTVqzApgrzoJn_aGDG2BData = data;
    aGDG2BSink();
}

void VLDdveDhTVqzApgrzoJn_aGD()
{
    aGDG2B();
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
#ifndef OMITaGD
    printLine("Calling aGD()...");
    VLDdveDhTVqzApgrzoJn_aGD();
    printLine("Finished aGD()");
#endif /* a */
#ifndef OMITgmB
    printLine("Calling gmB()...");
    VLDdveDhTVqzApgrzoJn_gmB();
    printLine("Finished gmB()");
#endif /* a */
    return 0;
}

#endif
