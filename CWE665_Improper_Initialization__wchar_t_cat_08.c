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

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a a a
 */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITdIE

void cEEUFWoGLDhSJFHmSWlj_dIE()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticReturnsTrue())
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

#ifndef OMITysn

/* a a a a a a a a a a a a */
static void ysnG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticReturnsFalse())
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
static void ysnG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticReturnsTrue())
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

void cEEUFWoGLDhSJFHmSWlj_ysn()
{
    ysnG2B1();
    ysnG2B2();
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
#ifndef OMITysn
    printLine("Calling ysn()...");
    cEEUFWoGLDhSJFHmSWlj_ysn();
    printLine("Finished ysn()");
#endif /* a */
#ifndef OMITdIE
    printLine("Calling dIE()...");
    cEEUFWoGLDhSJFHmSWlj_dIE();
    printLine("Finished dIE()");
#endif /* a */
    return 0;
}

#endif
