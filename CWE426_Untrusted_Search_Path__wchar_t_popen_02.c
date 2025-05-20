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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define vOt_OS_COMMAND L"cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define von_OS_COMMAND L"c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define vOt_OS_COMMAND L"ls -la"
#define von_OS_COMMAND L"/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _wpopen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

#ifndef OMITvOt

void ysNxQAXUpanVDoLGlevp_vOt()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(1)
    {
        /* a a a a a a a */
        wcscpy(data, vOt_OS_COMMAND);
    }
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

#ifndef OMITvon

/* a a a a a a a a a a a a */
static void vonG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        wcscpy(data, von_OS_COMMAND);
    }
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

/* a a a a a a a a a a a a a a */
static void vonG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(1)
    {
        /* a a a a a */
        wcscpy(data, von_OS_COMMAND);
    }
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

void ysNxQAXUpanVDoLGlevp_von()
{
    vonG2B1();
    vonG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITvon
    printLine("Calling von()...");
    ysNxQAXUpanVDoLGlevp_von();
    printLine("Finished von()");
#endif /* a */
#ifndef OMITvOt
    printLine("Calling vOt()...");
    ysNxQAXUpanVDoLGlevp_vOt();
    printLine("Finished vOt()");
#endif /* a */
    return 0;
}

#endif
