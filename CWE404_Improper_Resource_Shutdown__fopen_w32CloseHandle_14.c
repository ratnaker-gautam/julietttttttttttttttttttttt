/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#ifndef OMITzhC

void ZTzseLVlVEuiogoFDSrP_zhC()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("zhCSource_fopen.txt", "w+");
    if(globalFive==5)
    {
        if (data != NULL)
        {
            /* a a a a a a a a a a a */
            CloseHandle((HANDLE)data);
        }
    }
}

#endif /* a */

#ifndef OMITVRk

/* a a a a a a a a a a a */
static void VRkB2G1()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("zhCSource_fopen.txt", "w+");
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            /* a a a a a a */
            fclose(data);
        }
    }
}

/* a a a a a a a a a a a  */
static void VRkB2G2()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("zhCSource_fopen.txt", "w+");
    if(globalFive==5)
    {
        if (data != NULL)
        {
            /* a a a a a a */
            fclose(data);
        }
    }
}

void ZTzseLVlVEuiogoFDSrP_VRk()
{
    VRkB2G1();
    VRkB2G2();
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
#ifndef OMITVRk
    printLine("Calling VRk()...");
    ZTzseLVlVEuiogoFDSrP_VRk();
    printLine("Finished VRk()");
#endif /* a */
#ifndef OMITzhC
    printLine("Calling zhC()...");
    ZTzseLVlVEuiogoFDSrP_zhC();
    printLine("Finished zhC()");
#endif /* a */
    return 0;
}

#endif
