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
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a */
#define SRC_STRING "AAAAAAAAAA"

#ifndef OMITXaA

void brfVAAtPVhaHjkLiWpfC_XaA()
{
    char * data;
    char dataXaABuffer[10];
    char datakMDBuffer[10+1];
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = dataXaABuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printLine(data);
    }
}

#endif /* a */

#ifndef OMITkMD

/* a a a a a a a a a a a a */
static void kMDG2B1()
{
    char * data;
    char dataXaABuffer[10];
    char datakMDBuffer[10+1];
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = datakMDBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void kMDG2B2()
{
    char * data;
    char dataXaABuffer[10];
    char datakMDBuffer[10+1];
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = datakMDBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printLine(data);
    }
}

void brfVAAtPVhaHjkLiWpfC_kMD()
{
    kMDG2B1();
    kMDG2B2();
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
#ifndef OMITkMD
    printLine("Calling kMD()...");
    brfVAAtPVhaHjkLiWpfC_kMD();
    printLine("Finished kMD()");
#endif /* a */
#ifndef OMITXaA
    printLine("Calling XaA()...");
    brfVAAtPVhaHjkLiWpfC_XaA();
    printLine("Finished XaA()");
#endif /* a */
    return 0;
}

#endif
