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
#pragma comment( lib, "shlwapi" )
#include <shlwapi.h>

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITkJf

void aNbbDLQmMXesDFMVPWcd_kJf()
{
    if(staticReturnsTrue())
    {
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
    }
}

#endif /* a */

#ifndef OMITHHv

/* a a a a a a */
static void HHv1()
{
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}

/* a a a a a a a a */
static void HHv2()
{
    if(staticReturnsTrue())
    {
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
    }
}

void aNbbDLQmMXesDFMVPWcd_HHv()
{
    HHv1();
    HHv2();
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
#ifndef OMITHHv
    printLine("Calling HHv()...");
    aNbbDLQmMXesDFMVPWcd_HHv();
    printLine("Finished HHv()");
#endif /* a */
#ifndef OMITkJf
    printLine("Calling kJf()...");
    aNbbDLQmMXesDFMVPWcd_kJf();
    printLine("Finished kJf()");
#endif /* a */
    return 0;
}

#endif
