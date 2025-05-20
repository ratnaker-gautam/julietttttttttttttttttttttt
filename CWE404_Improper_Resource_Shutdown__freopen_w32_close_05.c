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

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITPeW

void WGzYEaKRNTEVLBsTrAgj_PeW()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = freopen("PeWSource_freopen.txt","w+",stdin);
    if(staticTrue)
    {
        if (data != NULL)
        {
            /* a a a a a a a a a a a */
            _close((int)data);
        }
    }
}

#endif /* a */

#ifndef OMITKDG

/* a a a a a a a a a a a */
static void KDGB2G1()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = freopen("PeWSource_freopen.txt","w+",stdin);
    if(staticFalse)
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
static void KDGB2G2()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = freopen("PeWSource_freopen.txt","w+",stdin);
    if(staticTrue)
    {
        if (data != NULL)
        {
            /* a a a a a a */
            fclose(data);
        }
    }
}

void WGzYEaKRNTEVLBsTrAgj_KDG()
{
    KDGB2G1();
    KDGB2G2();
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
#ifndef OMITKDG
    printLine("Calling KDG()...");
    WGzYEaKRNTEVLBsTrAgj_KDG();
    printLine("Finished KDG()");
#endif /* a */
#ifndef OMITPeW
    printLine("Calling PeW()...");
    WGzYEaKRNTEVLBsTrAgj_PeW();
    printLine("Finished PeW()");
#endif /* a */
    return 0;
}

#endif
