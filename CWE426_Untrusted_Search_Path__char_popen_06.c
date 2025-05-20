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
#define WqC_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define frH_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define WqC_OS_COMMAND "ls -la"
#define frH_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITWqC

void BhYucVIKVsblLPrvaYCL_WqC()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a */
        strcpy(data, WqC_OS_COMMAND);
    }
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

#endif /* a */

#ifndef OMITfrH

/* a a a a a a a a a a a a */
static void frHG2B1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        strcpy(data, frH_OS_COMMAND);
    }
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

/* a a a a a a a a a a a a a a */
static void frHG2B2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a */
        strcpy(data, frH_OS_COMMAND);
    }
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

void BhYucVIKVsblLPrvaYCL_frH()
{
    frHG2B1();
    frHG2B2();
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
#ifndef OMITfrH
    printLine("Calling frH()...");
    BhYucVIKVsblLPrvaYCL_frH();
    printLine("Finished frH()");
#endif /* a */
#ifndef OMITWqC
    printLine("Calling WqC()...");
    BhYucVIKVsblLPrvaYCL_WqC();
    printLine("Finished WqC()");
#endif /* a */
    return 0;
}

#endif
