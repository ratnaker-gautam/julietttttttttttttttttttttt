/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a
 * a a a a a a
 * a
 *    a a a a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>

#define CHAR_ARRAY_SIZE 20

static float lzEgDQmRqSNRhpAWRgyE_bghData;
static float lzEgDQmRqSNRhpAWRgyE_jnZG2BData;
static float lzEgDQmRqSNRhpAWRgyE_jnZB2GData;

#ifndef OMITbgh

static void bghSink()
{
    float data = lzEgDQmRqSNRhpAWRgyE_bghData;
    {
        /* a a a a a a */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}

void lzEgDQmRqSNRhpAWRgyE_bgh()
{
    float data;
    /* a a */
    data = 0.0F;
    {
        char inputBuffer[CHAR_ARRAY_SIZE];
        /* a a a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            data = (float)atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    lzEgDQmRqSNRhpAWRgyE_bghData = data;
    bghSink();
}

#endif /* a */

#ifndef OMITjnZ

/* a a a a a a a */
static void jnZG2BSink()
{
    float data = lzEgDQmRqSNRhpAWRgyE_jnZG2BData;
    {
        /* a a a a a a */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}

static void jnZG2B()
{
    float data;
    /* a a */
    data = 0.0F;
    /* a a a a a a a a a a a */
    data = 2.0F;
    lzEgDQmRqSNRhpAWRgyE_jnZG2BData = data;
    jnZG2BSink();
}

/* a a a a a a a */
static void jnZB2GSink()
{
    float data = lzEgDQmRqSNRhpAWRgyE_jnZB2GData;
    /* a a a a a a a a a a */
    if(fabs(data) > 0.000001)
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}

static void jnZB2G()
{
    float data;
    /* a a */
    data = 0.0F;
    {
        char inputBuffer[CHAR_ARRAY_SIZE];
        /* a a a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            data = (float)atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    lzEgDQmRqSNRhpAWRgyE_jnZB2GData = data;
    jnZB2GSink();
}

void lzEgDQmRqSNRhpAWRgyE_jnZ()
{
    jnZG2B();
    jnZB2G();
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
#ifndef OMITjnZ
    printLine("Calling jnZ()...");
    lzEgDQmRqSNRhpAWRgyE_jnZ();
    printLine("Finished jnZ()");
#endif /* a */
#ifndef OMITbgh
    printLine("Calling bgh()...");
    lzEgDQmRqSNRhpAWRgyE_bgh();
    printLine("Finished bgh()");
#endif /* a */
    return 0;
}

#endif
