/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a
 * a a a a a a
 * a
 *    a a a a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

static int64_t * YhPlHSMmleDLoHLTvcss_mIzData;
static int64_t * YhPlHSMmleDLoHLTvcss_agnG2BData;
static int64_t * YhPlHSMmleDLoHLTvcss_agnB2GData;

#ifndef OMITmIz

static void mIzSink()
{
    int64_t * data = YhPlHSMmleDLoHLTvcss_mIzData;
    /* a a a a */
    ; /* a a a a a a a */
}

void YhPlHSMmleDLoHLTvcss_mIz()
{
    int64_t * data;
    data = NULL;
    /* a a a a a a a */
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    /* a a a a a a */
    data[0] = 5LL;
    printLongLongLine(data[0]);
    YhPlHSMmleDLoHLTvcss_mIzData = data;
    mIzSink();
}

#endif /* a */

#ifndef OMITagn

/* a a a a a a a */
static void agnG2BSink()
{
    int64_t * data = YhPlHSMmleDLoHLTvcss_agnG2BData;
    /* a a a a */
    ; /* a a a a a a a */
}

static void agnG2B()
{
    int64_t * data;
    data = NULL;
    /* a a a a a a a a a */
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    /* a a a a a a */
    data[0] = 5LL;
    printLongLongLine(data[0]);
    YhPlHSMmleDLoHLTvcss_agnG2BData = data;
    agnG2BSink();
}

/* a a a a a a a */
static void agnB2GSink()
{
    int64_t * data = YhPlHSMmleDLoHLTvcss_agnB2GData;
    /* a a a */
    free(data);
}

static void agnB2G()
{
    int64_t * data;
    data = NULL;
    /* a a a a a a a */
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    /* a a a a a a */
    data[0] = 5LL;
    printLongLongLine(data[0]);
    YhPlHSMmleDLoHLTvcss_agnB2GData = data;
    agnB2GSink();
}

void YhPlHSMmleDLoHLTvcss_agn()
{
    agnG2B();
    agnB2G();
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
#ifndef OMITagn
    printLine("Calling agn()...");
    YhPlHSMmleDLoHLTvcss_agn();
    printLine("Finished agn()");
#endif /* a */
#ifndef OMITmIz
    printLine("Calling mIz()...");
    YhPlHSMmleDLoHLTvcss_mIz();
    printLine("Finished mIz()");
#endif /* a */
    return 0;
}

#endif
