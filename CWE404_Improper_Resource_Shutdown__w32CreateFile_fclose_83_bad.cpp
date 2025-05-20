/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a  a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITajX

#include "std_testcase.h"
#include "ZdubSPhAilUgxOmDEyap_fclose_83.h"

namespace ZdubSPhAilUgxOmDEyap_fclose_83
{
LcEXbbRiNWgYSfXGXlyT::LcEXbbRiNWgYSfXGXlyT(HANDLE dataCopy)
{
    data = dataCopy;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("ajXSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
}

LcEXbbRiNWgYSfXGXlyT::~LcEXbbRiNWgYSfXGXlyT()
{
    if (data != INVALID_HANDLE_VALUE)
    {
        /* a a a a a a a a a a a */
        fclose((FILE *)data);
    }
}
}
#endif /* a */
