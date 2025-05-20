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

#ifndef OMITQNK

void JXWUWQmHjrVqUYVQKWdt_QNK()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(globalFive==5)
    {
        /* a a a a a a */
        free(data);
    }
}

#endif /* a */

#ifndef OMITKDI

/* a a a a a a a a a a a a a */
static void KDIB2G1()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(globalFive!=5)
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
static void KDIB2G2()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(globalFive==5)
    {
        /* a a */
        /* a a a a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void KDIG2B1()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a */
    }
    if(globalFive==5)
    {
        /* a a a a a a */
        free(data);
    }
}

/* a a a a a a a a a a a a a a */
static void KDIG2B2()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a a a a a a a a a */
    }
    if(globalFive==5)
    {
        /* a a a a a a */
        free(data);
    }
}

void JXWUWQmHjrVqUYVQKWdt_KDI()
{
    KDIB2G1();
    KDIB2G2();
    KDIG2B1();
    KDIG2B2();
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
#ifndef OMITKDI
    printLine("Calling KDI()...");
    JXWUWQmHjrVqUYVQKWdt_KDI();
    printLine("Finished KDI()");
#endif /* a */
#ifndef OMITQNK
    printLine("Calling QNK()...");
    JXWUWQmHjrVqUYVQKWdt_QNK();
    printLine("Finished QNK()");
#endif /* a */
    return 0;
}

#endif
