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
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define ars_OS_COMMAND L"cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define any_OS_COMMAND L"c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define ars_OS_COMMAND L"ls -la"
#define any_OS_COMMAND L"/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _wpopen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

typedef struct _HAfysHwNNaRbzCPFIvZf__wchar_t_popen_67_structType
{
    wchar_t * structFirst;
} HAfysHwNNaRbzCPFIvZf__wchar_t_popen_67_structType;

#ifndef OMITars

void qocrNthbigvlXOLaqoAS_arsSink(HAfysHwNNaRbzCPFIvZf__wchar_t_popen_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        FILE *pipe;
        /* a a a a a a a a a a a a a a
         * a a a a a a a a a */
        pipe = POPEN(data, L"wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

#endif /* a */

#ifndef OMITany

/* a a a a a a a */
void qocrNthbigvlXOLaqoAS_anyG2BSink(HAfysHwNNaRbzCPFIvZf__wchar_t_popen_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        FILE *pipe;
        /* a a a a a a a a a a a a a a
         * a a a a a a a a a */
        pipe = POPEN(data, L"wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

#endif /* a */
