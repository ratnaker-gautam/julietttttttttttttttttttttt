/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a
 * a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITvPQ

void RriZVocuphvOUYczsaYE_vPQ()
{
    wchar_t * data;
    wchar_t * datavPQBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataERkBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
        data = datavPQBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a a a a a */
        wcscpy(data, source);
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMITERk

/* a a a a a a a a a a a a */
static void ERkG2B1()
{
    wchar_t * data;
    wchar_t * datavPQBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataERkBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = dataERkBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a a a a a */
        wcscpy(data, source);
        printWLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void ERkG2B2()
{
    wchar_t * data;
    wchar_t * datavPQBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataERkBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a a a a a a */
        data = dataERkBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a a a a a */
        wcscpy(data, source);
        printWLine(data);
    }
}

void RriZVocuphvOUYczsaYE_ERk()
{
    ERkG2B1();
    ERkG2B2();
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
#ifndef OMITERk
    printLine("Calling ERk()...");
    RriZVocuphvOUYczsaYE_ERk();
    printLine("Finished ERk()");
#endif /* a */
#ifndef OMITvPQ
    printLine("Calling vPQ()...");
    RriZVocuphvOUYczsaYE_vPQ();
    printLine("Finished vPQ()");
#endif /* a */
    return 0;
}

#endif
