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
#define rlU_OS_COMMAND L"cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define oWo_OS_COMMAND L"c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define rlU_OS_COMMAND L"ls -la"
#define oWo_OS_COMMAND L"/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _wpopen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

#ifndef OMITrlU

void hoFThwMLzuCQBGsiviFR_rlU()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a */
        wcscpy(data, rlU_OS_COMMAND);
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

#ifndef OMIToWo

/* a a a a a a a a a a a a */
static void oWoG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        wcscpy(data, oWo_OS_COMMAND);
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
static void oWoG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a */
        wcscpy(data, oWo_OS_COMMAND);
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

void hoFThwMLzuCQBGsiviFR_oWo()
{
    oWoG2B1();
    oWoG2B2();
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
#ifndef OMIToWo
    printLine("Calling oWo()...");
    hoFThwMLzuCQBGsiviFR_oWo();
    printLine("Finished oWo()");
#endif /* a */
#ifndef OMITrlU
    printLine("Calling rlU()...");
    hoFThwMLzuCQBGsiviFR_rlU();
    printLine("Finished rlU()");
#endif /* a */
    return 0;
}

#endif
