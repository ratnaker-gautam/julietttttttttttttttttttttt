/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a
 * a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a
 */
static int staticFive = 5;

#ifndef OMITbiZ

void eqyoGfsjcHnhMRYzLFph_biZ()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticFive==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMITGHd

/* a a a a a a a a a a a a */
static void GHdG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a */
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void GHdG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticFive==5)
    {
        /* a a a a */
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

void eqyoGfsjcHnhMRYzLFph_GHd()
{
    GHdG2B1();
    GHdG2B2();
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
#ifndef OMITGHd
    printLine("Calling GHd()...");
    eqyoGfsjcHnhMRYzLFph_GHd();
    printLine("Finished GHd()");
#endif /* a */
#ifndef OMITbiZ
    printLine("Calling biZ()...");
    eqyoGfsjcHnhMRYzLFph_biZ();
    printLine("Finished biZ()");
#endif /* a */
    return 0;
}

#endif
