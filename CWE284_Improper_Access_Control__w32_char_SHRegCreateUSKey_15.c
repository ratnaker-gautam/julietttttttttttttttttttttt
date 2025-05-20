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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "shlwapi" )
#include <shlwapi.h>

#ifndef OMITcAM

void ebclRNnhgPRwnJfwtzhU_cAM()
{
    switch(6)
    {
    case 6:
    {
        char * keyName = "TEST\\TestKey";
        HUSKEY hKey = HKEY_CURRENT_USER;
        /* a a a a a a a a a */
        if (SHRegCreateUSKeyA(
                    keyName,
                    KEY_ALL_ACCESS,
                    NULL,
                    &hKey,
                    SHREGSET_HKCU) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be created");
        }
        else
        {
            printLine("Registry key created successfully");
            SHRegCloseUSKey(hKey);
        }
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITuNw

/* a a a a a a */
static void uNw1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
    {
        char * keyName = "TEST\\TestKey";
        HUSKEY hKey = HKEY_CURRENT_USER;
        /* a a a a a a a a a a a a */
        if (SHRegCreateUSKeyA(
                    keyName,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    SHREGSET_HKCU) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be created");
        }
        else
        {
            printLine("Registry key created successfully");
            SHRegCloseUSKey(hKey);
        }
    }
    break;
    }
}

/* a a a a a a a */
static void uNw2()
{
    switch(6)
    {
    case 6:
    {
        char * keyName = "TEST\\TestKey";
        HUSKEY hKey = HKEY_CURRENT_USER;
        /* a a a a a a a a a a a a */
        if (SHRegCreateUSKeyA(
                    keyName,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    SHREGSET_HKCU) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be created");
        }
        else
        {
            printLine("Registry key created successfully");
            SHRegCloseUSKey(hKey);
        }
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void ebclRNnhgPRwnJfwtzhU_uNw()
{
    uNw1();
    uNw2();
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
#ifndef OMITuNw
    printLine("Calling uNw()...");
    ebclRNnhgPRwnJfwtzhU_uNw();
    printLine("Finished uNw()");
#endif /* a */
#ifndef OMITcAM
    printLine("Calling cAM()...");
    ebclRNnhgPRwnJfwtzhU_cAM();
    printLine("Finished cAM()");
#endif /* a */
    return 0;
}

#endif
