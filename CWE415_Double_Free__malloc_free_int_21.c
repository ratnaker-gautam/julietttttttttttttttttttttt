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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITyNr

/* a a a a a a a a a a a a a a */
static int yNrStatic = 0;

static void yNrSink(int * data)
{
    if(yNrStatic)
    {
        /* a a a a a a */
        free(data);
    }
}

void MGvfLBFPoZguORYDbGjy_yNr()
{
    int * data;
    /* a a */
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    /* a a a a a a a a a a a a a a a */
    free(data);
    yNrStatic = 1; /* a */
    yNrSink(data);
}

#endif /* a */

#ifndef OMITuPj

/* a a a a a a a a a a a a a a */
static int uPjB2G1Static = 0;
static int uPjB2G2Static = 0;
static int uPjG2BStatic = 0;

/* a a a a a a a a a a a a a a a a */
static void uPjB2G1Sink(int * data)
{
    if(uPjB2G1Static)
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

static void uPjB2G1()
{
    int * data;
    /* a a */
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    /* a a a a a a a a a a a a a a a */
    free(data);
    uPjB2G1Static = 0; /* a */
    uPjB2G1Sink(data);
}

/* a a a a a a a a a a a a a a a a a */
static void uPjB2G2Sink(int * data)
{
    if(uPjB2G2Static)
    {
        /* a a */
        /* a a a a a a a */
        ; /* a a a a a a a */
    }
}

static void uPjB2G2()
{
    int * data;
    /* a a */
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    /* a a a a a a a a a a a a a a a */
    free(data);
    uPjB2G2Static = 1; /* a */
    uPjB2G2Sink(data);
}

/* a a a a a a */
static void uPjG2BSink(int * data)
{
    if(uPjG2BStatic)
    {
        /* a a a a a a */
        free(data);
    }
}

static void uPjG2B()
{
    int * data;
    /* a a */
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    /* a a a a a a a a a a a a a a */
    uPjG2BStatic = 1; /* a */
    uPjG2BSink(data);
}

void MGvfLBFPoZguORYDbGjy_uPj()
{
    uPjB2G1();
    uPjB2G2();
    uPjG2B();
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
#ifndef OMITuPj
    printLine("Calling uPj()...");
    MGvfLBFPoZguORYDbGjy_uPj();
    printLine("Finished uPj()");
#endif /* a */
#ifndef OMITyNr
    printLine("Calling yNr()...");
    MGvfLBFPoZguORYDbGjy_yNr();
    printLine("Finished yNr()");
#endif /* a */
    return 0;
}

#endif
