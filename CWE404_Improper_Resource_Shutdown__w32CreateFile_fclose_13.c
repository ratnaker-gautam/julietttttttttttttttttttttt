/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a  a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#ifndef OMITFSl

void EKCwWatVnSFlBGEYgozD_FSl()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("FSlSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    if(GLOBAL_CONST_FIVE==5)
    {
        if (data != INVALID_HANDLE_VALUE)
        {
            /* a a a a a a a a a a a */
            fclose((FILE *)data);
        }
    }
}

#endif /* a */

#ifndef OMITlBX

/* a a a a a a a a a a a */
static void lBXB2G1()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("FSlSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != INVALID_HANDLE_VALUE)
        {
            /* a a a a a a */
            CloseHandle(data);
        }
    }
}

/* a a a a a a a a a a a  */
static void lBXB2G2()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("FSlSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    if(GLOBAL_CONST_FIVE==5)
    {
        if (data != INVALID_HANDLE_VALUE)
        {
            /* a a a a a a */
            CloseHandle(data);
        }
    }
}

void EKCwWatVnSFlBGEYgozD_lBX()
{
    lBXB2G1();
    lBXB2G2();
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
#ifndef OMITlBX
    printLine("Calling lBX()...");
    EKCwWatVnSFlBGEYgozD_lBX();
    printLine("Finished lBX()");
#endif /* a */
#ifndef OMITFSl
    printLine("Calling FSl()...");
    EKCwWatVnSFlBGEYgozD_FSl();
    printLine("Finished FSl()");
#endif /* a */
    return 0;
}

#endif
