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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITqpo

void HdYvPkzzhnbfPTNOZWcH_qpo()
{
    int i;
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    {
        size_t sourceLen;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        sourceLen = wcslen(source);
        /* a a a a a a a a a a a a a */
        wcsncat(data, source, sourceLen);
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMITwKq

/* a a a a a a a a a a a a a a */
static void wKqG2B()
{
    int h;
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        /* a a a a */
        data[0] = L'\0'; /* a a */
    }
    {
        size_t sourceLen;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        sourceLen = wcslen(source);
        /* a a a a a a a a a a a a a */
        wcsncat(data, source, sourceLen);
        printWLine(data);
    }
}

void HdYvPkzzhnbfPTNOZWcH_wKq()
{
    wKqG2B();
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
#ifndef OMITwKq
    printLine("Calling wKq()...");
    HdYvPkzzhnbfPTNOZWcH_wKq();
    printLine("Finished wKq()");
#endif /* a */
#ifndef OMITqpo
    printLine("Calling qpo()...");
    HdYvPkzzhnbfPTNOZWcH_qpo();
    printLine("Finished qpo()");
#endif /* a */
    return 0;
}

#endif
