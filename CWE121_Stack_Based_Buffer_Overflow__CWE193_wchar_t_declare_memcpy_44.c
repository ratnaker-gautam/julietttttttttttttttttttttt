/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a */
#define SRC_STRING L"AAAAAAAAAA"

#ifndef OMITdGe

static void dGeSink(wchar_t * data)
{
    {
        wchar_t source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
    }
}

void kjOGtCcpJECgqBRTZhLr_dGe()
{
    wchar_t * data;
    /* a a a a */
    void (*funcPtr) (wchar_t *) = dGeSink;
    wchar_t datadGeBuffer[10];
    wchar_t dataEnxBuffer[10+1];
    /* a a a a a a a a a a a a a a a a a a
     * a a a a a  */
    data = datadGeBuffer;
    data[0] = L'\0'; /* a a */
    /* a a a a */
    funcPtr(data);
}

#endif /* a */

#ifndef OMITEnx

/* a a a a a a a */
static void EnxG2BSink(wchar_t * data)
{
    {
        wchar_t source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
    }
}

static void EnxG2B()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = EnxG2BSink;
    wchar_t datadGeBuffer[10];
    wchar_t dataEnxBuffer[10+1];
    /* a a a a a a a a a a a a a a a a
     * a a a a a  */
    data = dataEnxBuffer;
    data[0] = L'\0'; /* a a */
    funcPtr(data);
}

void kjOGtCcpJECgqBRTZhLr_Enx()
{
    EnxG2B();
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
#ifndef OMITEnx
    printLine("Calling Enx()...");
    kjOGtCcpJECgqBRTZhLr_Enx();
    printLine("Finished Enx()");
#endif /* a */
#ifndef OMITdGe
    printLine("Calling dGe()...");
    kjOGtCcpJECgqBRTZhLr_dGe();
    printLine("Finished dGe()");
#endif /* a */
    return 0;
}

#endif
