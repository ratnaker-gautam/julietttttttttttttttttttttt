/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a
 * a
 *    a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITFjn

#include "std_testcase.h"
#include "FkBfgpUOzgiJguhCBBbP__fgets_84.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

namespace FkBfgpUOzgiJguhCBBbP__fgets_84
{
adaKzSpnEROfoNbpYGRF::adaKzSpnEROfoNbpYGRF(int dataCopy)
{
    data = dataCopy;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
}

adaKzSpnEROfoNbpYGRF::~adaKzSpnEROfoNbpYGRF()
{
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}
}
#endif /* a */
