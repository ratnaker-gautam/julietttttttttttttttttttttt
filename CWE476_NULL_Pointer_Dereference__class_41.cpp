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
 *    a a a a a a a a a a
 *    a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace lVGPzTBnNKJrhxKTXlCq
{

#ifndef OMITdsV

static void dsVSink(TwoIntsClass * data)
{
    /* a a a a a a a a a a */
    printIntLine(data->intOne);
    /* a a a a a a a a a a a a a a a a a a a a */
    delete data;
}

void dsV()
{
    TwoIntsClass * data;
    /* a a a a a a */
    data = NULL;
    dsVSink(data);
}

#endif /* a */

#ifndef OMITXQp

/* a a a a a a a */
static void XQpG2BSink(TwoIntsClass * data)
{
    /* a a a a a a a a a a */
    printIntLine(data->intOne);
    /* a a a a a a a a a a a a a a a a a a a a */
    delete data;
}

static void XQpG2B()
{
    TwoIntsClass * data;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        /* a a a */
        data = tmpData;
    }
    XQpG2BSink(data);
}

/* a a a a a a a */
static void XQpB2GSink(TwoIntsClass * data)
{
    /* a a a a a a a a a */
    if (data != NULL)
    {
        printIntLine(data->intOne);
        delete data;
    }
    else
    {
        printLine("data is NULL");
    }
}

static void XQpB2G()
{
    TwoIntsClass * data;
    /* a a a a a a */
    data = NULL;
    XQpB2GSink(data);
}

void XQp()
{
    XQpG2B();
    XQpB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace lVGPzTBnNKJrhxKTXlCq; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITXQp
    printLine("Calling XQp()...");
    XQp();
    printLine("Finished XQp()");
#endif /* a */
#ifndef OMITdsV
    printLine("Calling dsV()...");
    dsV();
    printLine("Finished dsV()");
#endif /* a */
    return 0;
}

#endif
