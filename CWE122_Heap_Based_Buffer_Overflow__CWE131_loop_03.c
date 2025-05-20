/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a
 * a a a a a
 * a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITSmx

void kypEOXbaGiEqrnMtGIQv_Smx()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        /* a a a a a a */
        data = (int *)malloc(10);
        if (data == NULL) {exit(-1);}
    }
    {
        int source[10] = {0};
        size_t i;
        /* a a a a a a a a a a a a a a */
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
        free(data);
    }
}

#endif /* a */

#ifndef OMITyJN

/* a a a a a a a a a a a a */
static void yJNG2B1()
{
    int * data;
    data = NULL;
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        data = (int *)malloc(10*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    {
        int source[10] = {0};
        size_t i;
        /* a a a a a a a a a a a a a a */
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
        free(data);
    }
}

/* a a a a a a a a a a a a a a */
static void yJNG2B2()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        /* a a a a a */
        data = (int *)malloc(10*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    {
        int source[10] = {0};
        size_t i;
        /* a a a a a a a a a a a a a a */
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
        free(data);
    }
}

void kypEOXbaGiEqrnMtGIQv_yJN()
{
    yJNG2B1();
    yJNG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITyJN
    printLine("Calling yJN()...");
    kypEOXbaGiEqrnMtGIQv_yJN();
    printLine("Finished yJN()");
#endif /* a */
#ifndef OMITSmx
    printLine("Calling Smx()...");
    kypEOXbaGiEqrnMtGIQv_Smx();
    printLine("Finished Smx()");
#endif /* a */
    return 0;
}

#endif
