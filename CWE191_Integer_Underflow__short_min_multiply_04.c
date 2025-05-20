/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITIYP

void pVUyGJXOmJPqUGYCTCDf_IYP()
{
    short data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        data = SHRT_MIN;
    }
    if(STATIC_CONST_TRUE)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITPGZ

/* a a a a a a a a a a a a a */
static void PGZB2G1()
{
    short data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        data = SHRT_MIN;
    }
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void PGZB2G2()
{
    short data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        data = SHRT_MIN;
    }
    if(STATIC_CONST_TRUE)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void PGZG2B1()
{
    short data;
    data = 0;
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(STATIC_CONST_TRUE)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void PGZG2B2()
{
    short data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(STATIC_CONST_TRUE)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

void pVUyGJXOmJPqUGYCTCDf_PGZ()
{
    PGZB2G1();
    PGZB2G2();
    PGZG2B1();
    PGZG2B2();
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
#ifndef OMITPGZ
    printLine("Calling PGZ()...");
    pVUyGJXOmJPqUGYCTCDf_PGZ();
    printLine("Finished PGZ()");
#endif /* a */
#ifndef OMITIYP
    printLine("Calling IYP()...");
    pVUyGJXOmJPqUGYCTCDf_IYP();
    printLine("Finished IYP()");
#endif /* a */
    return 0;
}

#endif
