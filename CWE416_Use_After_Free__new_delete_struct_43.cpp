/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a a a a
 * a a a a a a a a a
 * a
 *    a a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace WgTmfdIwGscVDRWPYeSu
{

#ifndef OMITgMB

void gMBSource(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    /* a a a a a a a a a a a a a a a */
    delete data;
}

void gMB()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    gMBSource(data);
    /* a a a a a a a a a a */
    printStructLine(data);
    /* a a a a a a a a a a a a */
}

#endif /* a */

#ifndef OMITCfg

/* a a a a a a a */
static void CfgG2BSource(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    /* a a a a a a a a */
}

static void CfgG2B()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    CfgG2BSource(data);
    /* a a a a a a a a a a */
    printStructLine(data);
    /* a a a a a a a a a a a a */
}

/* a a a a a a a */
static void CfgB2GSource(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    /* a a a a a a a a a a a a a a a */
    delete data;
}

static void CfgB2G()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    CfgB2GSource(data);
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    /* a a */
    ; /* a a a a a a a */
}

void Cfg()
{
    CfgG2B();
    CfgB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace WgTmfdIwGscVDRWPYeSu; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITCfg
    printLine("Calling Cfg()...");
    Cfg();
    printLine("Finished Cfg()");
#endif /* a */
#ifndef OMITgMB
    printLine("Calling gMB()...");
    gMB();
    printLine("Finished gMB()");
#endif /* a */
    return 0;
}

#endif
