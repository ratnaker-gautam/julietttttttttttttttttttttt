/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

static void * ZuPmPootSYCsPnlFhgNH_rMRData;
static void * ZuPmPootSYCsPnlFhgNH_wiHG2BData;

#ifndef OMITrMR

static void rMRSink()
{
    void * data = ZuPmPootSYCsPnlFhgNH_rMRData;
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

void ZuPmPootSYCsPnlFhgNH_rMR()
{
    void * data;
    /* a a */
    data = NULL;
    {
        /* a a a a a a */
        char charBuffer = 'a';
        data = &charBuffer;
    }
    ZuPmPootSYCsPnlFhgNH_rMRData = data;
    rMRSink();
}

#endif /* a */

#ifndef OMITwiH

/* a a a a a a a */
static void wiHG2BSink()
{
    void * data = ZuPmPootSYCsPnlFhgNH_wiHG2BData;
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

static void wiHG2B()
{
    void * data;
    /* a a */
    data = NULL;
    {
        /* a a a a a a */
        int intBuffer = 8;
        data = &intBuffer;
    }
    ZuPmPootSYCsPnlFhgNH_wiHG2BData = data;
    wiHG2BSink();
}

void ZuPmPootSYCsPnlFhgNH_wiH()
{
    wiHG2B();
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
#ifndef OMITwiH
    printLine("Calling wiH()...");
    ZuPmPootSYCsPnlFhgNH_wiH();
    printLine("Finished wiH()");
#endif /* a */
#ifndef OMITrMR
    printLine("Calling rMR()...");
    ZuPmPootSYCsPnlFhgNH_rMR();
    printLine("Finished rMR()");
#endif /* a */
    return 0;
}

#endif
