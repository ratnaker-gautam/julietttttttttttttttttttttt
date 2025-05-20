/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a  a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define OPEN _open
#define CLOSE _close
#else
#include <unistd.h>
#define OPEN open
#define CLOSE close
#endif

#ifndef OMITLpx

/* a a a a a a a a a a a a a a */
static int LpxStatic = 0;

static void LpxSink(int data)
{
    if(LpxStatic)
    {
        if (data != -1)
        {
            /* a a a a a a a a a a a */
            fclose((FILE *)data);
        }
    }
}

void mcVgFsBIIWZyrkedxcnq_Lpx()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a a a a a a a a a a a a */
    data = OPEN("LpxSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    LpxStatic = 1; /* a */
    LpxSink(data);
}

#endif /* a */

#ifndef OMITISV

/* a a a a a a a a a a a a a a */
static int ISVB2G1Static = 0;
static int ISVB2G2Static = 0;

/* a a a a a a a a a a a a a a a a */
static void ISVB2G1Sink(int data)
{
    if(ISVB2G1Static)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != -1)
        {
            /* a a a a a a */
            CLOSE(data);
        }
    }
}

static void ISVB2G1()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a a a a a a a a a a a a */
    data = OPEN("LpxSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    ISVB2G1Static = 0; /* a */
    ISVB2G1Sink(data);
}

/* a a a a a a a a a a a a a a a a a */
static void ISVB2G2Sink(int data)
{
    if(ISVB2G2Static)
    {
        if (data != -1)
        {
            /* a a a a a a */
            CLOSE(data);
        }
    }
}

static void ISVB2G2()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a a a a a a a a a a a a */
    data = OPEN("LpxSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    ISVB2G2Static = 1; /* a */
    ISVB2G2Sink(data);
}

void mcVgFsBIIWZyrkedxcnq_ISV()
{
    ISVB2G1();
    ISVB2G2();
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
#ifndef OMITISV
    printLine("Calling ISV()...");
    mcVgFsBIIWZyrkedxcnq_ISV();
    printLine("Finished ISV()");
#endif /* a */
#ifndef OMITLpx
    printLine("Calling Lpx()...");
    mcVgFsBIIWZyrkedxcnq_Lpx();
    printLine("Finished Lpx()");
#endif /* a */
    return 0;
}

#endif
