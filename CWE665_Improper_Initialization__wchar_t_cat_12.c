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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITbIh

void PkTcqfDkAdWSxoJkAFos_bIh()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        ; /* a a a a a a a */
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

#endif /* a */

#ifndef OMITfpA

/* a a a a a a a a a a a a
 * a a a a a */
static void fpAG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a */
        data[0] = L'\0'; /* a a */
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

void PkTcqfDkAdWSxoJkAFos_fpA()
{
    fpAG2B();
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
#ifndef OMITfpA
    printLine("Calling fpA()...");
    PkTcqfDkAdWSxoJkAFos_fpA();
    printLine("Finished fpA()");
#endif /* a */
#ifndef OMITbIh
    printLine("Calling bIh()...");
    PkTcqfDkAdWSxoJkAFos_bIh();
    printLine("Finished bIh()");
#endif /* a */
    return 0;
}

#endif
