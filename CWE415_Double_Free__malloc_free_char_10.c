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

#ifndef OMITtcv

void GONJzYjHbBSfFnvQiZvY_tcv()
{
    char * data;
    /* a a */
    data = NULL;
    if(globalTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(globalTrue)
    {
        /* a a a a a a */
        free(data);
    }
}

#endif /* a */

#ifndef OMITRXJ

/* a a a a a a a a a a a a a */
static void RXJB2G1()
{
    char * data;
    /* a a */
    data = NULL;
    if(globalTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(globalFalse)
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
static void RXJB2G2()
{
    char * data;
    /* a a */
    data = NULL;
    if(globalTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(globalTrue)
    {
        /* a a */
        /* a a a a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void RXJG2B1()
{
    char * data;
    /* a a */
    data = NULL;
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a */
    }
    if(globalTrue)
    {
        /* a a a a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a a */
static void RXJG2B2()
{
    char * data;
    /* a a */
    data = NULL;
    if(globalTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a */
    }
    if(globalTrue)
    {
        /* a a a a a a */
        free(data);
    }
}

void GONJzYjHbBSfFnvQiZvY_RXJ()
{
    RXJB2G1();
    RXJB2G2();
    RXJG2B1();
    RXJG2B2();
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
#ifndef OMITRXJ
    printLine("Calling RXJ()...");
    GONJzYjHbBSfFnvQiZvY_RXJ();
    printLine("Finished RXJ()");
#endif /* a */
#ifndef OMITtcv
    printLine("Calling tcv()...");
    GONJzYjHbBSfFnvQiZvY_tcv();
    printLine("Finished tcv()");
#endif /* a */
    return 0;
}

#endif
