/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITiIl

void VaNjfIoJqfjtjUjpkoor_iIl()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

#endif /* a */

#ifndef OMITwAR

/* a a a a a a a a a a a a a */
static void wARB2G1()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(STATIC_CONST_FIVE!=5)
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
    }
}

/* a a a a a a a a a a a a a a */
static void wARB2G2()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(STATIC_CONST_FIVE==5)
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
    }
}

/* a a a a a a a a a a a a a */
static void wARG2B1()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void wARG2B2()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

void VaNjfIoJqfjtjUjpkoor_wAR()
{
    wARB2G1();
    wARB2G2();
    wARG2B1();
    wARG2B2();
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
#ifndef OMITwAR
    printLine("Calling wAR()...");
    VaNjfIoJqfjtjUjpkoor_wAR();
    printLine("Finished wAR()");
#endif /* a */
#ifndef OMITiIl
    printLine("Calling iIl()...");
    VaNjfIoJqfjtjUjpkoor_iIl();
    printLine("Finished iIl()");
#endif /* a */
    return 0;
}

#endif
