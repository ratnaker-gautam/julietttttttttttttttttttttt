/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a
 * a a a a a a
 * a
 *    a a a a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>

#ifndef OMITicW

static void icWSink(float data)
{
    {
        /* a a a a a a */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}

void KRGlcefuvWckqFQLuDCc_icW()
{
    float data;
    /* a a */
    data = 0.0F;
    /* a a a a a a */
    data = 0.0F;
    icWSink(data);
}

#endif /* a */

#ifndef OMITcrw

/* a a a a a a a */
static void crwG2BSink(float data)
{
    {
        /* a a a a a a */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}

static void crwG2B()
{
    float data;
    /* a a */
    data = 0.0F;
    /* a a a a a a a a a a a */
    data = 2.0F;
    crwG2BSink(data);
}

/* a a a a a a a */
static void crwB2GSink(float data)
{
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

static void crwB2G()
{
    float data;
    /* a a */
    data = 0.0F;
    /* a a a a a a */
    data = 0.0F;
    crwB2GSink(data);
}

void KRGlcefuvWckqFQLuDCc_crw()
{
    crwB2G();
    crwG2B();
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
#ifndef OMITcrw
    printLine("Calling crw()...");
    KRGlcefuvWckqFQLuDCc_crw();
    printLine("Finished crw()");
#endif /* a */
#ifndef OMITicW
    printLine("Calling icW()...");
    KRGlcefuvWckqFQLuDCc_icW();
    printLine("Finished icW()");
#endif /* a */
    return 0;
}

#endif
