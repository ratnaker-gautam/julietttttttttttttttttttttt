/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITLMv

#include "std_testcase.h"
#include "ATIhCkisFZtNLaUZWiaj__fopen_w32CloseHandle_84.h"

#include <windows.h>

namespace ATIhCkisFZtNLaUZWiaj__fopen_w32CloseHandle_84
{
NWSaCBWunbMXYlFcscNq::NWSaCBWunbMXYlFcscNq(FILE * dataCopy)
{
    data = dataCopy;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("LMvSource_fopen.txt", "w+");
}

NWSaCBWunbMXYlFcscNq::~NWSaCBWunbMXYlFcscNq()
{
    if (data != NULL)
    {
        /* a a a a a a a a a a a */
        CloseHandle((HANDLE)data);
    }
}
}
#endif /* a */
