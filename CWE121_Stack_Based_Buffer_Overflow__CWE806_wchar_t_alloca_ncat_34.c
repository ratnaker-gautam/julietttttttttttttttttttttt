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
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} YcNMqqyHmhqdVJdALUux_unionType;

#ifndef OMITJNm

void YcNMqqyHmhqdVJdALUux_JNm()
{
    wchar_t * data;
    YcNMqqyHmhqdVJdALUux_unionType myUnion;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    /* a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 100-1); /* a a a */
    data[100-1] = L'\0'; /* a a */
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[50] = L"";
            /* a a a a a a a a a a a*/
            wcsncat(dest, data, wcslen(data));
            dest[50-1] = L'\0'; /* a a a a a a a */
            printWLine(data);
        }
    }
}

#endif /* a */

#ifndef OMITpSL

/* a a a a a a a */
static void pSLG2B()
{
    wchar_t * data;
    YcNMqqyHmhqdVJdALUux_unionType myUnion;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    /* a a a a a a a a a a a a a a a a a a a a */
    wmemset(data, L'A', 50-1); /* a a a */
    data[50-1] = L'\0'; /* a a */
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[50] = L"";
            /* a a a a a a a a a a a*/
            wcsncat(dest, data, wcslen(data));
            dest[50-1] = L'\0'; /* a a a a a a a */
            printWLine(data);
        }
    }
}

void YcNMqqyHmhqdVJdALUux_pSL()
{
    pSLG2B();
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
#ifndef OMITpSL
    printLine("Calling pSL()...");
    YcNMqqyHmhqdVJdALUux_pSL();
    printLine("Finished pSL()");
#endif /* a */
#ifndef OMITJNm
    printLine("Calling JNm()...");
    YcNMqqyHmhqdVJdALUux_JNm();
    printLine("Finished JNm()");
#endif /* a */
    return 0;
}

#endif
