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
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace qwhpScLxgeVtQBtlnGgg
{

#ifndef OMIToQK

static void oQKSource(wchar_t * &data)
{
    /* a a a a a */
    ; /* a a a a a a a */
}

void oQK()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    oQKSource(data);
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

#ifndef OMITmNn

/* a a a a a a a */
static void mNnG2BSource(wchar_t * &data)
{
    /* a a a a */
    data[0] = L'\0'; /* a a */
}

static void mNnG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    mNnG2BSource(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a */
        wcscat(data, source);
        printWLine(data);
    }
}

void mNn()
{
    mNnG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

using namespace qwhpScLxgeVtQBtlnGgg; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITmNn
    printLine("Calling mNn()...");
    mNn();
    printLine("Finished mNn()");
#endif /* a */
#ifndef OMIToQK
    printLine("Calling oQK()...");
    oQK();
    printLine("Finished oQK()");
#endif /* a */
    return 0;
}

#endif
