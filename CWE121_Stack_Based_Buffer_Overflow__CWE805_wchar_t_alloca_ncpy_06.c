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

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITFvm

void pkmyPQOrASMXVNWeTxGk_Fvm()
{
    wchar_t * data;
    wchar_t * dataFvmBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataoEoBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
        data = dataFvmBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a a a a a */
        wcsncpy(data, source, 100-1);
        data[100-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
    }
}

#endif /* a */

#ifndef OMIToEo

/* a a a a a a a a a a a a */
static void oEoG2B1()
{
    wchar_t * data;
    wchar_t * dataFvmBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataoEoBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = dataoEoBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a a a a a */
        wcsncpy(data, source, 100-1);
        data[100-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void oEoG2B2()
{
    wchar_t * data;
    wchar_t * dataFvmBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataoEoBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a a a a a a */
        data = dataoEoBuffer;
        data[0] = L'\0'; /* a a */
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* a a a */
        source[100-1] = L'\0'; /* a a */
        /* a a a a a a a a a a a a a a a a a */
        wcsncpy(data, source, 100-1);
        data[100-1] = L'\0'; /* a a a a a a a */
        printWLine(data);
    }
}

void pkmyPQOrASMXVNWeTxGk_oEo()
{
    oEoG2B1();
    oEoG2B2();
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
#ifndef OMIToEo
    printLine("Calling oEo()...");
    pkmyPQOrASMXVNWeTxGk_oEo();
    printLine("Finished oEo()");
#endif /* a */
#ifndef OMITFvm
    printLine("Calling Fvm()...");
    pkmyPQOrASMXVNWeTxGk_Fvm();
    printLine("Finished Fvm()");
#endif /* a */
    return 0;
}

#endif
