/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

namespace oPjwqcxTvmEQQboOXCsD
{

#ifndef OMITbMr

void bMr()
{
    double * data;
    data = new double[10];
    if(staticFive==5)
    {
        /* a a a a a */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
        /* a a a */
        delete [] data;
    }
}

#endif /* a */

#ifndef OMITSps

/* a a a a a a a a a a a a a */
static void SpsB2G1()
{
    double * data;
    data = new double[10];
    if(staticFive==5)
    {
        /* a a a a a */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
        /* a a a */
        delete [] data;
    }
}

/* a a a a a a a a a a a a a a */
static void SpsB2G2()
{
    double * data;
    data = new double[10];
    if(staticFive==5)
    {
        /* a a a a a */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
        /* a a a */
        delete [] data;
    }
}

/* a a a a a a a a a a a a a */
static void SpsG2B1()
{
    double * data;
    data = new double[10];
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
        /* a a a */
        delete [] data;
    }
}

/* a a a a a a a a a a a a a a */
static void SpsG2B2()
{
    double * data;
    data = new double[10];
    if(staticFive==5)
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
        /* a a a */
        delete [] data;
    }
}

void Sps()
{
    SpsB2G1();
    SpsB2G2();
    SpsG2B1();
    SpsG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace oPjwqcxTvmEQQboOXCsD; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITSps
    printLine("Calling Sps()...");
    Sps();
    printLine("Finished Sps()");
#endif /* a */
#ifndef OMITbMr
    printLine("Calling bMr()...");
    bMr();
    printLine("Finished bMr()");
#endif /* a */
    return 0;
}

#endif
