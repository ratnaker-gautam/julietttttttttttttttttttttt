/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a
 * a a a a a a a a a a a
 * a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITuMQ

#include "std_testcase.h"
#include "fbWVQIyHgbrhyGNNgKiZ_struct_83.h"

namespace fbWVQIyHgbrhyGNNgKiZ_struct_83
{
dCMXbsRZBnNkFpMWhAyM::dCMXbsRZBnNkFpMWhAyM(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    /* a a a a a a a a a */
    /* a a a a a a a a a a a a */
    data = (twoIntsStruct *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    data->intOne = 1;
    data->intTwo = 2;
}

dCMXbsRZBnNkFpMWhAyM::~dCMXbsRZBnNkFpMWhAyM()
{
    /* a a a a a a a a a a a a a */
    printStructLine(data);
    free(data);
}
}
#endif /* a */
