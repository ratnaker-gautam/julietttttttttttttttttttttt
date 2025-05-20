/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a
 * a a a
 * a a
 *    a a a a a a a a
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifdef _WIN32
#define FULL_COMMAND "dir "
#else
#include <unistd.h>
#define FULL_COMMAND "ls "
#endif

#define ENV_VARIABLE "ADD"

#ifdef _WIN32
#define GETENV getenv
#else
#define GETENV getenv
#endif

#ifdef _WIN32
#define SYSTEM system
#else /* a a */
#define SYSTEM system
#endif

#ifndef OMITePs

void OAuoOPbEzNKkSaozbect_ePs()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        /* a a a a a a a a */
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        /* a a a a a a a a */
        if (environment != NULL)
        {
            /* a a a a a a a a */
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    /* a a a a a a a a a a a */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */

#ifndef OMITxOB

/* a a a a a a a */
static void xOBG2B()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    /* a a a a a a a a a / a a */
    strcat(data, "*.*");
    /* a a a a a a a a a a a */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

void OAuoOPbEzNKkSaozbect_xOB()
{
    xOBG2B();
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
#ifndef OMITxOB
    printLine("Calling xOB()...");
    OAuoOPbEzNKkSaozbect_xOB();
    printLine("Finished xOB()");
#endif /* a */
#ifndef OMITePs
    printLine("Calling ePs()...");
    OAuoOPbEzNKkSaozbect_ePs();
    printLine("Finished ePs()");
#endif /* a */
    return 0;
}

#endif
