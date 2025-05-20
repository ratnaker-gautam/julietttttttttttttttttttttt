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

#ifndef OMITgte

void IUZlsWmvbxWgDfmBsesT_gte()
{
    char * data;
    /* a a */
    data = NULL;
    if(5==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        printLine(data);
        /* a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITDqQ

/* a a a a a a a a a a a a a */
static void DqQB2G1()
{
    char * data;
    /* a a */
    data = NULL;
    if(5==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(5!=5)
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
static void DqQB2G2()
{
    char * data;
    /* a a */
    data = NULL;
    if(5==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void DqQG2B1()
{
    char * data;
    /* a a */
    data = NULL;
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        /* a a a a a a a a */
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        printLine(data);
        /* a a a a a a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void DqQG2B2()
{
    char * data;
    /* a a */
    data = NULL;
    if(5==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        /* a a a a a a a a */
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        printLine(data);
        /* a a a a a a a a a a a a */
    }
}

void IUZlsWmvbxWgDfmBsesT_DqQ()
{
    DqQB2G1();
    DqQB2G2();
    DqQG2B1();
    DqQG2B2();
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
#ifndef OMITDqQ
    printLine("Calling DqQ()...");
    IUZlsWmvbxWgDfmBsesT_DqQ();
    printLine("Finished DqQ()");
#endif /* a */
#ifndef OMITgte
    printLine("Calling gte()...");
    IUZlsWmvbxWgDfmBsesT_gte();
    printLine("Finished gte()");
#endif /* a */
    return 0;
}

#endif
