/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a
 * a a a
 * a
 *    a a a a a a a a a
 *    a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITmYw

static void mYwSink(long * data)
{
    /* a a a a a a a a a a */
    printLongLine(*data);
}

void GXSlHHaSMrgugImjMIFc_mYw()
{
    long * data;
    /* a a a a a a */
    data = NULL;
    mYwSink(data);
}

#endif /* a */

#ifndef OMITCDo

/* a a a a a a a */
static void CDoG2BSink(long * data)
{
    /* a a a a a a a a a a */
    printLongLine(*data);
}

static void CDoG2B()
{
    long * data;
    long tmpData = 5L;
    /* a a a */
    {
        data = &tmpData;
    }
    CDoG2BSink(data);
}

/* a a a a a a a */
static void CDoB2GSink(long * data)
{
    /* a a a a a a a a a */
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}

static void CDoB2G()
{
    long * data;
    /* a a a a a a */
    data = NULL;
    CDoB2GSink(data);
}

void GXSlHHaSMrgugImjMIFc_CDo()
{
    CDoB2G();
    CDoG2B();
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
#ifndef OMITCDo
    printLine("Calling CDo()...");
    GXSlHHaSMrgugImjMIFc_CDo();
    printLine("Finished CDo()");
#endif /* a */
#ifndef OMITmYw
    printLine("Calling mYw()...");
    GXSlHHaSMrgugImjMIFc_mYw();
    printLine("Finished mYw()");
#endif /* a */
    return 0;
}

#endif
