/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a
 * a a a a a a
 * a
 *    a a a a a
 *    a a a a a a
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

namespace QAIPYdFEJDTpmQySexHy
{

#ifndef OMITbjO

static void bjOSink(twoIntsStruct * data)
{
    /* a a a a */
    ; /* a a a a a a a */
}

void bjO()
{
    twoIntsStruct * data;
    /* a a a a */
    void (*funcPtr) (twoIntsStruct *) = bjOSink;
    data = NULL;
    /* a a a a a a a */
    data = new twoIntsStruct;
    /* a a a a a a */
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    /* a a a a */
    funcPtr(data);
}

#endif /* a */

#ifndef OMITxsd

/* a a a a a a a */
static void xsdG2BSink(twoIntsStruct * data)
{
    /* a a a a */
    ; /* a a a a a a a */
}

static void xsdG2B()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = xsdG2BSink;
    data = NULL;
    /* a a a a a a a */
    twoIntsStruct dataxsdBuffer;
    data = &dataxsdBuffer;
    /* a a a a a a */
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    funcPtr(data);
}

/* a a a a a a a */
static void xsdB2GSink(twoIntsStruct * data)
{
    /* a a a */
    delete data;
}

static void xsdB2G()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = xsdB2GSink;
    data = NULL;
    /* a a a a a a a */
    data = new twoIntsStruct;
    /* a a a a a a */
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    funcPtr(data);
}

void xsd()
{
    xsdG2B();
    xsdB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace QAIPYdFEJDTpmQySexHy; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITxsd
    printLine("Calling xsd()...");
    xsd();
    printLine("Finished xsd()");
#endif /* a */
#ifndef OMITbjO
    printLine("Calling bjO()...");
    bjO();
    printLine("Finished bjO()");
#endif /* a */
    return 0;
}

#endif
