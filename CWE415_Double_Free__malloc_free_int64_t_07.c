/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a a a a a
 * a a a a a
 * a
 *    a a a
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

#ifndef OMITEWO

void uxcGztTaFCbbpMUHoLSZ_EWO()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(staticFive==5)
    {
        /* a a a a a a */
        free(data);
    }
}

#endif /* a */

#ifndef OMITXxL

/* a a a a a a a a a a a a a */
static void XxLB2G1()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a */
        /* a a a a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void XxLB2G2()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(staticFive==5)
    {
        /* a a */
        /* a a a a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void XxLG2B1()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a */
    }
    if(staticFive==5)
    {
        /* a a a a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a a */
static void XxLG2B2()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a */
    }
    if(staticFive==5)
    {
        /* a a a a a a */
        free(data);
    }
}

void uxcGztTaFCbbpMUHoLSZ_XxL()
{
    XxLB2G1();
    XxLB2G2();
    XxLG2B1();
    XxLG2B2();
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
#ifndef OMITXxL
    printLine("Calling XxL()...");
    uxcGztTaFCbbpMUHoLSZ_XxL();
    printLine("Finished XxL()");
#endif /* a */
#ifndef OMITEWO
    printLine("Calling EWO()...");
    uxcGztTaFCbbpMUHoLSZ_EWO();
    printLine("Finished EWO()");
#endif /* a */
    return 0;
}

#endif
