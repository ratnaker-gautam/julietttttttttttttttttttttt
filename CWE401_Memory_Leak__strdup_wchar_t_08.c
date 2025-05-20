/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a
 * a a a a a a
 * a
 *    a a a a a
 *    a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITIcW

void aHhRbgPeTzuSaxYcXypf_IcW()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        {
            wchar_t myString[] = L"myString";
            /* a a a a a a a a a a a a a a a */
            data = wcsdup(myString);
            /* a a */
            printWLine(data);
        }
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITnCX

/* a a a a a a a a a a a a a */
static void nCXB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        {
            wchar_t myString[] = L"myString";
            /* a a a a a a a a a a a a a a a */
            data = wcsdup(myString);
            /* a a */
            printWLine(data);
        }
    }
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a a */
static void nCXB2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        {
            wchar_t myString[] = L"myString";
            /* a a a a a a a a a a a a a a a */
            data = wcsdup(myString);
            /* a a */
            printWLine(data);
        }
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a */
static void nCXG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        /* a a a a */
        wcscpy(data, L"a string");
        printWLine(data);
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void nCXG2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a */
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        /* a a a a */
        wcscpy(data, L"a string");
        printWLine(data);
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

void aHhRbgPeTzuSaxYcXypf_nCX()
{
    nCXB2G1();
    nCXB2G2();
    nCXG2B1();
    nCXG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITnCX
    printLine("Calling nCX()...");
    aHhRbgPeTzuSaxYcXypf_nCX();
    printLine("Finished nCX()");
#endif /* a */
#ifndef OMITIcW
    printLine("Calling IcW()...");
    aHhRbgPeTzuSaxYcXypf_IcW();
    printLine("Finished IcW()");
#endif /* a */
    return 0;
}

#endif
