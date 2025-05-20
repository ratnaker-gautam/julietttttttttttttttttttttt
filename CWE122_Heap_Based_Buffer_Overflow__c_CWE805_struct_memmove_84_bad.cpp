/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITElo

#include "std_testcase.h"
#include "PBJTdzgevgUpjIXqbHyR_struct_memmove_84.h"

namespace PBJTdzgevgUpjIXqbHyR_struct_memmove_84
{
eKGUlFcBDRhZmopgZlYH::eKGUlFcBDRhZmopgZlYH(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    /* a a a a a a a a a a a a a a a a a a a a */
    data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
}

eKGUlFcBDRhZmopgZlYH::~eKGUlFcBDRhZmopgZlYH()
{
    {
        twoIntsStruct source[100];
        {
            size_t i;
            /* a a */
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        /* a a a a a a a a a */
        memmove(data, source, 100*sizeof(twoIntsStruct));
        printStructLine(&data[0]);
        free(data);
    }
}
}
#endif /* a */
