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

#ifndef OMITxkd

void wKCAoivYJyMEvTDOMIuV_xkd()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITieQ

/* a a a a a a a a a a a a a */
static void ieQB2G1()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(GLOBAL_CONST_FALSE)
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
static void ieQB2G2()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a */
static void ieQG2B1()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void ieQG2B2()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a a */
        data = (int *)ALLOCA(100*sizeof(int));
        /* a a a a a a */
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a */
        ; /* a a a a a a a */
    }
}

void wKCAoivYJyMEvTDOMIuV_ieQ()
{
    ieQB2G1();
    ieQB2G2();
    ieQG2B1();
    ieQG2B2();
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
#ifndef OMITieQ
    printLine("Calling ieQ()...");
    wKCAoivYJyMEvTDOMIuV_ieQ();
    printLine("Finished ieQ()");
#endif /* a */
#ifndef OMITxkd
    printLine("Calling xkd()...");
    wKCAoivYJyMEvTDOMIuV_xkd();
    printLine("Finished xkd()");
#endif /* a */
    return 0;
}

#endif
