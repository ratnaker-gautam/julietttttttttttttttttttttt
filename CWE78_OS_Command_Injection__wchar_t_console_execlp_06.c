/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a
 * a a a
 * a a
 *    a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifdef _WIN32
#define COMMAND_INT_PATH L"%WINDIR%\\system32\\cmd.exe"
#define COMMAND_INT L"cmd.exe"
#define COMMAND_ARG1 L"/c"
#define COMMAND_ARG2 L"dir "
#define COMMAND_ARG3 data
#else /* a a */
#include <unistd.h>
#define COMMAND_INT_PATH L"/bin/sh"
#define COMMAND_INT L"sh"
#define COMMAND_ARG1 L"-c"
#define COMMAND_ARG2 L"ls "
#define COMMAND_ARG3 data
#endif

#ifdef _WIN32
#include <process.h>
#define EXECLP _wexeclp
#else /* a a */
#define EXECLP execlp
#endif

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITCij

void QdAZrbqkwsTImNozHNmA_Cij()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* a a a a a */
            size_t dataLen = wcslen(data);
            /* a a a a a a a a a a a a */
            if (100-dataLen > 1)
            {
                /* a a a a a a a */
                if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
                {
                    /* a a a a a a a a a a a a a
                     * a a a */
                    dataLen = wcslen(data);
                    if (dataLen > 0 && data[dataLen-1] == L'\n')
                    {
                        data[dataLen-1] = L'\0';
                    }
                }
                else
                {
                    printLine("fgetws() failed");
                    /* a a a a a a */
                    data[dataLen] = L'\0';
                }
            }
        }
    }
    /* a a a a a a a a a a
     * a a a a a a a a */
    /* a a a a a a a a a a a a */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

#endif /* a */

#ifndef OMITOSz

/* a a a a a a a a a a a a */
static void OSzG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    /* a a a a a a a a a a
     * a a a a a a a a */
    /* a a a a a a a a a a a a */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

/* a a a a a a a a a a a a a a */
static void OSzG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    /* a a a a a a a a a a
     * a a a a a a a a */
    /* a a a a a a a a a a a a */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

void QdAZrbqkwsTImNozHNmA_OSz()
{
    OSzG2B1();
    OSzG2B2();
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
#ifndef OMITOSz
    printLine("Calling OSz()...");
    QdAZrbqkwsTImNozHNmA_OSz();
    printLine("Finished OSz()");
#endif /* a */
#ifndef OMITCij
    printLine("Calling Cij()...");
    QdAZrbqkwsTImNozHNmA_Cij();
    printLine("Finished Cij()");
#endif /* a */
    return 0;
}

#endif
