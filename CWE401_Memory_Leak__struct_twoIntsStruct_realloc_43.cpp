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
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace MbnPwZhXuKDktLdNreHq
{

#ifndef OMITxQA

static void xQASource(struct _twoIntsStruct * &data)
{
    /* a a a a a a a */
    data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    /* a a a a a a */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
}

void xQA()
{
    struct _twoIntsStruct * data;
    data = NULL;
    xQASource(data);
    /* a a a a */
    ; /* a a a a a a a */
}

#endif /* a */

#ifndef OMIThJW

/* a a a a a a a */
static void hJWG2BSource(struct _twoIntsStruct * &data)
{
    /* a a a a a a a a a */
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    /* a a a a a a */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
}

static void hJWG2B()
{
    struct _twoIntsStruct * data;
    data = NULL;
    hJWG2BSource(data);
    /* a a a a */
    ; /* a a a a a a a */
}

/* a a a a a a a */
static void hJWB2GSource(struct _twoIntsStruct * &data)
{
    /* a a a a a a a */
    data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    /* a a a a a a */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
}

static void hJWB2G()
{
    struct _twoIntsStruct * data;
    data = NULL;
    hJWB2GSource(data);
    /* a a a */
    free(data);
}

void hJW()
{
    hJWG2B();
    hJWB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace MbnPwZhXuKDktLdNreHq; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMIThJW
    printLine("Calling hJW()...");
    hJW();
    printLine("Finished hJW()");
#endif /* a */
#ifndef OMITxQA
    printLine("Calling xQA()...");
    xQA();
    printLine("Finished xQA()");
#endif /* a */
    return 0;
}

#endif
