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

#ifndef OMITfTx

void udoCgeWCfMYTrkpYjVlh_fTx()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        {
            wchar_t myString[] = L"myString";
            /* a a a a a a a a a a a a a a a */
            data = wcsdup(myString);
            /* a a */
            printWLine(data);
        }
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITGVv

/* a a a a a a a a a a a a a */
static void GVvB2G1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        {
            wchar_t myString[] = L"myString";
            /* a a a a a a a a a a a a a a a */
            data = wcsdup(myString);
            /* a a */
            printWLine(data);
        }
    }
    if(globalReturnsFalse())
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
static void GVvB2G2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        {
            wchar_t myString[] = L"myString";
            /* a a a a a a a a a a a a a a a */
            data = wcsdup(myString);
            /* a a */
            printWLine(data);
        }
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a */
static void GVvG2B1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        /* a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void GVvG2B2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a */
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        /* a a a a */
        wcscpy(data, L"a string");
        printWLine(data);
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

void udoCgeWCfMYTrkpYjVlh_GVv()
{
    GVvB2G1();
    GVvB2G2();
    GVvG2B1();
    GVvG2B2();
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
#ifndef OMITGVv
    printLine("Calling GVv()...");
    udoCgeWCfMYTrkpYjVlh_GVv();
    printLine("Finished GVv()");
#endif /* a */
#ifndef OMITfTx
    printLine("Calling fTx()...");
    udoCgeWCfMYTrkpYjVlh_fTx();
    printLine("Finished fTx()");
#endif /* a */
    return 0;
}

#endif
