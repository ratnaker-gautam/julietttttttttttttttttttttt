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
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define hbL_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define Udq_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define hbL_OS_COMMAND "ls -la"
#define Udq_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define SYSTEM system
#else /* a a */
#define SYSTEM system
#endif

#ifndef OMIThbL

/* a a a a a a a a a a a a a a */
int PTDFJllrxOPEiCCeoKZG__char_system_22_hbLGlobal = 0;

char * PTDFJllrxOPEiCCeoKZG__char_system_22_hbLSource(char * data);

void PTDFJllrxOPEiCCeoKZG__char_system_22_hbL()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    PTDFJllrxOPEiCCeoKZG__char_system_22_hbLGlobal = 1; /* a */
    data = PTDFJllrxOPEiCCeoKZG__char_system_22_hbLSource(data);
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */

#ifndef OMITUdq

/* a a a a a a a a a a a a a a */
int PTDFJllrxOPEiCCeoKZG__char_system_22_UdqG2B1Global = 0;
int PTDFJllrxOPEiCCeoKZG__char_system_22_UdqG2B2Global = 0;

/* a a a a a a a a a a a a a a a a */
char * PTDFJllrxOPEiCCeoKZG__char_system_22_UdqG2B1Source(char * data);

static void UdqG2B1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    PTDFJllrxOPEiCCeoKZG__char_system_22_UdqG2B1Global = 0; /* a */
    data = PTDFJllrxOPEiCCeoKZG__char_system_22_UdqG2B1Source(data);
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

/* a a a a a a a a a a a a a a a a a */
char * PTDFJllrxOPEiCCeoKZG__char_system_22_UdqG2B2Source(char * data);

static void UdqG2B2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    PTDFJllrxOPEiCCeoKZG__char_system_22_UdqG2B2Global = 1; /* a */
    data = PTDFJllrxOPEiCCeoKZG__char_system_22_UdqG2B2Source(data);
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

void PTDFJllrxOPEiCCeoKZG__char_system_22_Udq()
{
    UdqG2B1();
    UdqG2B2();
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
#ifndef OMITUdq
    printLine("Calling Udq()...");
    PTDFJllrxOPEiCCeoKZG__char_system_22_Udq();
    printLine("Finished Udq()");
#endif /* a */
#ifndef OMIThbL
    printLine("Calling hbL()...");
    PTDFJllrxOPEiCCeoKZG__char_system_22_hbL();
    printLine("Finished hbL()");
#endif /* a */
    return 0;
}

#endif
