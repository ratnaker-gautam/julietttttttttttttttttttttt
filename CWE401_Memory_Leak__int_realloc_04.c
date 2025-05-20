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
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITDFl

void CRaeEdNEmGNkIatPIeWF_DFl()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a */
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITONe

/* a a a a a a a a a a a a a */
static void ONeB2G1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a */
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(STATIC_CONST_FALSE)
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
static void ONeB2G2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a */
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a */
static void ONeG2B1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        data = (int *)ALLOCA(100*sizeof(int));
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void ONeG2B2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a */
        data = (int *)ALLOCA(100*sizeof(int));
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

void CRaeEdNEmGNkIatPIeWF_ONe()
{
    ONeB2G1();
    ONeB2G2();
    ONeG2B1();
    ONeG2B2();
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
#ifndef OMITONe
    printLine("Calling ONe()...");
    CRaeEdNEmGNkIatPIeWF_ONe();
    printLine("Finished ONe()");
#endif /* a */
#ifndef OMITDFl
    printLine("Calling DFl()...");
    CRaeEdNEmGNkIatPIeWF_DFl();
    printLine("Finished DFl()");
#endif /* a */
    return 0;
}

#endif
