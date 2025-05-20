/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a a a a a a
 *    a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "advapi32" )

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITTNG

void peocFyUwPHEXgzauYUyY_TNG()
{
    if(staticFive==5)
    {
        {
            char * keyName = "TEST\\TestKey";
            HKEY hKey;
            /* a a a a a a a a a */
            if (RegCreateKeyExA(
                        HKEY_CURRENT_USER,
                        keyName,
                        0,
                        NULL,
                        REG_OPTION_NON_VOLATILE,
                        KEY_ALL_ACCESS,
                        NULL,
                        &hKey,
                        NULL) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be created");
            }
            else
            {
                printLine("Registry key created successfully");
                RegCloseKey(hKey);
            }
        }
    }
}

#endif /* a */

#ifndef OMITqTG

/* a a a a a a */
static void qTG1()
{
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * keyName = "TEST\\TestKey";
            HKEY hKey;
            /* a a a a a a a a a a a a */
            if (RegCreateKeyExA(
                        HKEY_CURRENT_USER,
                        keyName,
                        0,
                        NULL,
                        REG_OPTION_NON_VOLATILE,
                        KEY_WRITE,
                        NULL,
                        &hKey,
                        NULL) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be created");
            }
            else
            {
                printLine("Registry key created successfully");
                RegCloseKey(hKey);
            }
        }
    }
}

/* a a a a a a a a */
static void qTG2()
{
    if(staticFive==5)
    {
        {
            char * keyName = "TEST\\TestKey";
            HKEY hKey;
            /* a a a a a a a a a a a a */
            if (RegCreateKeyExA(
                        HKEY_CURRENT_USER,
                        keyName,
                        0,
                        NULL,
                        REG_OPTION_NON_VOLATILE,
                        KEY_WRITE,
                        NULL,
                        &hKey,
                        NULL) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be created");
            }
            else
            {
                printLine("Registry key created successfully");
                RegCloseKey(hKey);
            }
        }
    }
}

void peocFyUwPHEXgzauYUyY_qTG()
{
    qTG1();
    qTG2();
}

#endif /* a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITqTG
    printLine("Calling qTG()...");
    peocFyUwPHEXgzauYUyY_qTG();
    printLine("Finished qTG()");
#endif /* a */
#ifndef OMITTNG
    printLine("Calling TNG()...");
    peocFyUwPHEXgzauYUyY_TNG();
    printLine("Finished TNG()");
#endif /* a */
    return 0;
}

#endif
