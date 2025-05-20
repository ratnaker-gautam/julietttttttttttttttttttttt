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

#ifndef OMITAfO

void BWiZMPfcPuVGVMZlviHP_AfO()
{
    while(1)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HUSKEY hKey = HKEY_CURRENT_USER;
            /* a a a a a a a a a */
            if (SHRegCreateUSKeyW(
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
    }
}

#endif /* a */

#ifndef OMITgre

/* a a a a a a a a */
static void gre1()
{
    while(1)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HUSKEY hKey = HKEY_CURRENT_USER;
            /* a a a a a a a a a a a a */
            if (SHRegCreateUSKeyW(
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

void BWiZMPfcPuVGVMZlviHP_gre()
{
    gre1();
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
#ifndef OMITgre
    printLine("Calling gre()...");
    BWiZMPfcPuVGVMZlviHP_gre();
    printLine("Finished gre()");
#endif /* a */
#ifndef OMITAfO
    printLine("Calling AfO()...");
    BWiZMPfcPuVGVMZlviHP_AfO();
    printLine("Finished AfO()");
#endif /* a */
    return 0;
}

#endif
