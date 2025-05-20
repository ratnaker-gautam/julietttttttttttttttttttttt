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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define RoJ_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define ldz_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define RoJ_OS_COMMAND "ls -la"
#define ldz_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define SYSTEM system
#else /* a a */
#define SYSTEM system
#endif

#ifndef OMITRoJ

void RfKorRdgeFsXLiMELnLt_RoJ()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a a a */
    strcpy(data, RoJ_OS_COMMAND);
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */

#ifndef OMITldz

/* a a a a a a a */
static void ldzG2B()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a */
    strcpy(data, ldz_OS_COMMAND);
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

void RfKorRdgeFsXLiMELnLt_ldz()
{
    ldzG2B();
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
#ifndef OMITldz
    printLine("Calling ldz()...");
    RfKorRdgeFsXLiMELnLt_ldz();
    printLine("Finished ldz()");
#endif /* a */
#ifndef OMITRoJ
    printLine("Calling RoJ()...");
    RfKorRdgeFsXLiMELnLt_RoJ();
    printLine("Finished RoJ()");
#endif /* a */
    return 0;
}

#endif
