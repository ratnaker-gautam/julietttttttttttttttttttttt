/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a a a
 * a a a a a a a a a a a
 * a a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITWRS

#include "std_testcase.h"
#include "bqcEBEBcEBNmXfuPznyr_wchar_t_loop_83.h"

namespace bqcEBEBcEBNmXfuPznyr_wchar_t_loop_83
{
NStmdILMlzWIjPIHFxLc::NStmdILMlzWIjPIHFxLc(wchar_t * dataCopy)
{
    data = dataCopy;
    /* a a a a a a a a a */
    data = new wchar_t[10];
}

NStmdILMlzWIjPIHFxLc::~NStmdILMlzWIjPIHFxLc()
{
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printWLine(data);
        delete [] data;
    }
}
}
#endif /* a */
