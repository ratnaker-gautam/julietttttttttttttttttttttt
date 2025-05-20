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
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace FMUBhHqauMjhKqRrKXZE
{

#ifndef OMITmPM

void mPM()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* a a a a a */
    ; /* a a a a a a a */
    {
        wchar_t * data = dataRef;
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
}

#endif /* a */

#ifndef OMITqYu

/* a a a a a a a */
static void qYuG2B()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* a a a a */
    data[0] = L'\0'; /* a a */
    {
        wchar_t * data = dataRef;
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
}

void qYu()
{
    qYuG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */
#ifdef INCLUDEMAIN

using namespace FMUBhHqauMjhKqRrKXZE; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITqYu
    printLine("Calling qYu()...");
    qYu();
    printLine("Finished qYu()");
#endif /* a */
#ifndef OMITmPM
    printLine("Calling mPM()...");
    mPM();
    printLine("Finished mPM()");
#endif /* a */
    return 0;
}

#endif
