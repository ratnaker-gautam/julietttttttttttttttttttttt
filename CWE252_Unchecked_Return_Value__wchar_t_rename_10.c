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
 * a a a a a a a a
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

#define OLD_Nzw_FILE_NAME L"oldNzwfilename.txt"
#define OLD_dbU_FILE_NAME L"olddbUfilename.txt"

#ifndef OMITNzw

void qkHXZEqkrAlcBsvLkNAu_Nzw()
{
    if(globalTrue)
    {
        /* a a a a a a a */
        RENAME(OLD_Nzw_FILE_NAME, L"newNzwfilename.txt");
    }
}

#endif /* a */

#ifndef OMITdbU

/* a a a a a a */
static void dbU1()
{
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        if (RENAME(OLD_dbU_FILE_NAME, L"newdbUfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
    }
}

/* a a a a a a a a */
static void dbU2()
{
    if(globalTrue)
    {
        /* a a a a a */
        if (RENAME(OLD_dbU_FILE_NAME, L"newdbUfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
    }
}

void qkHXZEqkrAlcBsvLkNAu_dbU()
{
    dbU1();
    dbU2();
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
#ifndef OMITdbU
    printLine("Calling dbU()...");
    qkHXZEqkrAlcBsvLkNAu_dbU();
    printLine("Finished dbU()");
#endif /* a */
#ifndef OMITNzw
    printLine("Calling Nzw()...");
    qkHXZEqkrAlcBsvLkNAu_Nzw();
    printLine("Finished Nzw()");
#endif /* a */
    return 0;
}

#endif
