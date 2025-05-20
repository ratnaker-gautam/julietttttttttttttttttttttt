/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a
 *    a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifdef _WIN32
#define RENAME _wrename
#else
#define RENAME rename
#endif

#define OLD_KDr_FILE_NAME L"oldKDrfilename.txt"
#define OLD_zxM_FILE_NAME L"oldzxMfilename.txt"

#ifndef OMITKDr

void srJTMrFvvcbiinjwxGTQ_KDr()
{
    goto sink;
sink:
    /* a a a a a a a */
    RENAME(OLD_KDr_FILE_NAME, L"newKDrfilename.txt");
}

#endif /* a */

#ifndef OMITzxM

/* a a a a a a a a */
static void zxM1()
{
    goto sink;
sink:
    /* a a a a a */
    if (RENAME(OLD_zxM_FILE_NAME, L"newzxMfilename.txt") != 0)
    {
        printLine("rename failed!");
    }
}

void srJTMrFvvcbiinjwxGTQ_zxM()
{
    zxM1();
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
#ifndef OMITzxM
    printLine("Calling zxM()...");
    srJTMrFvvcbiinjwxGTQ_zxM();
    printLine("Finished zxM()");
#endif /* a */
#ifndef OMITKDr
    printLine("Calling KDr()...");
    srJTMrFvvcbiinjwxGTQ_KDr();
    printLine("Finished KDr()");
#endif /* a */
    return 0;
}

#endif
