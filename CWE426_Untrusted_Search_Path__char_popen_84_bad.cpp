/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITWSO

#include "std_testcase.h"
#include "ZCgwBnLbfdUuddjNBoqk__char_popen_84.h"

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

namespace ZCgwBnLbfdUuddjNBoqk__char_popen_84
{
QYAeKHfhjyZfHdsRAXhM::QYAeKHfhjyZfHdsRAXhM(char * dataCopy)
{
    data = dataCopy;
    /* a a a a a a a */
    strcpy(data, WSO_OS_COMMAND);
}

QYAeKHfhjyZfHdsRAXhM::~QYAeKHfhjyZfHdsRAXhM()
{
    {
        FILE *pipe;
        /* a a a a a a a a a a a a a a
         * a a a a a a a a a */
        pipe = POPEN(data, "wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
}
#endif /* a */
