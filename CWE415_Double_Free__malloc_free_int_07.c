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

#ifndef OMITvNP

void PsFuUqXpbmRNixquPqQT_vNP()
{
    int * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
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

#ifndef OMITGFn

/* a a a a a a a a a a a a a */
static void GFnB2G1()
{
    int * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
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
static void GFnB2G2()
{
    int * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
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
static void GFnG2B1()
{
    int * data;
    /* a a */
    data = NULL;
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
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
static void GFnG2B2()
{
    int * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a */
    }
    if(staticFive==5)
    {
        /* a a a a a a */
        free(data);
    }
}

void PsFuUqXpbmRNixquPqQT_GFn()
{
    GFnB2G1();
    GFnB2G2();
    GFnG2B1();
    GFnG2B2();
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
#ifndef OMITGFn
    printLine("Calling GFn()...");
    PsFuUqXpbmRNixquPqQT_GFn();
    printLine("Finished GFn()");
#endif /* a */
#ifndef OMITvNP
    printLine("Calling vNP()...");
    PsFuUqXpbmRNixquPqQT_vNP();
    printLine("Finished vNP()");
#endif /* a */
    return 0;
}

#endif
