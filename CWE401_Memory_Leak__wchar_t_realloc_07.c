/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a
 * a a a a a a
 * a
 *    a a a a a
 *    a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMIToUa

void JgiIMHYpuAgoCnMLPHro_oUa()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        /* a a a a a a a */
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticFive==5)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITCzq

/* a a a a a a a a a a a a a */
static void CzqB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        /* a a a a a a a */
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a a */
static void CzqB2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        /* a a a a a a a */
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticFive==5)
    {
        /* a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a */
static void CzqG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        /* a a a a a a */
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticFive==5)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void CzqG2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        /* a a a a a a a a a */
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        /* a a a a a a */
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticFive==5)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

void JgiIMHYpuAgoCnMLPHro_Czq()
{
    CzqB2G1();
    CzqB2G2();
    CzqG2B1();
    CzqG2B2();
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
#ifndef OMITCzq
    printLine("Calling Czq()...");
    JgiIMHYpuAgoCnMLPHro_Czq();
    printLine("Finished Czq()");
#endif /* a */
#ifndef OMIToUa
    printLine("Calling oUa()...");
    JgiIMHYpuAgoCnMLPHro_oUa();
    printLine("Finished oUa()");
#endif /* a */
    return 0;
}

#endif
