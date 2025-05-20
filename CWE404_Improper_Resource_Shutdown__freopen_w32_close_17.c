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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITrCx

void CkhZCLvvPSojhIaPMCtx_rCx()
{
    int j;
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = freopen("rCxSource_freopen.txt","w+",stdin);
    for(j = 0; j < 1; j++)
    {
        if (data != NULL)
        {
            /* a a a a a a a a a a a */
            _close((int)data);
        }
    }
}

#endif /* a */

#ifndef OMITAyL

/* a a a a a a a a a */
static void AyLB2G()
{
    int k;
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = freopen("rCxSource_freopen.txt","w+",stdin);
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            /* a a a a a a */
            fclose(data);
        }
    }
}

void CkhZCLvvPSojhIaPMCtx_AyL()
{
    AyLB2G();
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
#ifndef OMITAyL
    printLine("Calling AyL()...");
    CkhZCLvvPSojhIaPMCtx_AyL();
    printLine("Finished AyL()");
#endif /* a */
#ifndef OMITrCx
    printLine("Calling rCx()...");
    CkhZCLvvPSojhIaPMCtx_rCx();
    printLine("Finished rCx()");
#endif /* a */
    return 0;
}

#endif
