/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a a a a
 * a a a a a a a a a
 * a
 *    a a a
 *    a a a a
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

#ifndef OMITHIG

void hBDszQlBUhvhIlPDLuDx_HIG()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a */
        printWLine(data);
        /* a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITchE

/* a a a a a a a a a a a a a */
static void chEB2G1()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void chEB2G2()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void chEG2B1()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a */
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a */
        printWLine(data);
        /* a a a a a a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void chEG2B2()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a */
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a */
        printWLine(data);
        /* a a a a a a a a a a a a */
    }
}

void hBDszQlBUhvhIlPDLuDx_chE()
{
    chEB2G1();
    chEB2G2();
    chEG2B1();
    chEG2B2();
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
#ifndef OMITchE
    printLine("Calling chE()...");
    hBDszQlBUhvhIlPDLuDx_chE();
    printLine("Finished chE()");
#endif /* a */
#ifndef OMITHIG
    printLine("Calling HIG()...");
    hBDszQlBUhvhIlPDLuDx_HIG();
    printLine("Finished HIG()");
#endif /* a */
    return 0;
}

#endif
