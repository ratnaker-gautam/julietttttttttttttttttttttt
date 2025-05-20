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
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

static wchar_t * ZfhvYRKaxhMpmxGxnGKb_BmWData;
static wchar_t * ZfhvYRKaxhMpmxGxnGKb_HjeG2BData;

#ifndef OMITBmW

static void BmWSink()
{
    wchar_t * data = ZfhvYRKaxhMpmxGxnGKb_BmWData;
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

void ZfhvYRKaxhMpmxGxnGKb_BmW()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* a a a a a */
    ; /* a a a a a a a */
    ZfhvYRKaxhMpmxGxnGKb_BmWData = data;
    BmWSink();
}

#endif /* a */

#ifndef OMITHje

/* a a a a a a a */
static void HjeG2BSink()
{
    wchar_t * data = ZfhvYRKaxhMpmxGxnGKb_HjeG2BData;
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

static void HjeG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* a a a a */
    data[0] = L'\0'; /* a a */
    ZfhvYRKaxhMpmxGxnGKb_HjeG2BData = data;
    HjeG2BSink();
}

void ZfhvYRKaxhMpmxGxnGKb_Hje()
{
    HjeG2B();
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
#ifndef OMITHje
    printLine("Calling Hje()...");
    ZfhvYRKaxhMpmxGxnGKb_Hje();
    printLine("Finished Hje()");
#endif /* a */
#ifndef OMITBmW
    printLine("Calling BmW()...");
    ZfhvYRKaxhMpmxGxnGKb_BmW();
    printLine("Finished BmW()");
#endif /* a */
    return 0;
}

#endif
