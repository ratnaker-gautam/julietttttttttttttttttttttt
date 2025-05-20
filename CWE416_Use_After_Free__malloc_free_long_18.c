/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a a a a
 * a a a a a a a a a
 * a
 *    a a a
 *    a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITiYT

void CcVkjJvbnsxUQmlfOamY_iYT()
{
    long * data;
    /* a a */
    data = NULL;
    goto source;
source:
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    /* a a a a a a a a a a a a a a a */
    free(data);
    goto sink;
sink:
    /* a a a a a a a a a a */
    printLongLine(data[0]);
    /* a a a a a a a a a a a a */
}

#endif /* a */

#ifndef OMITteE

/* a a a a a a a a a a a a a a a */
static void teEB2G()
{
    long * data;
    /* a a */
    data = NULL;
    goto source;
source:
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    /* a a a a a a a a a a a a a a a */
    free(data);
    goto sink;
sink:
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    /* a a */
    ; /* a a a a a a a */
}

/* a a a a a a a a a a a a a a a */
static void teEG2B()
{
    long * data;
    /* a a */
    data = NULL;
    goto source;
source:
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    /* a a a a a a a a */
    goto sink;
sink:
    /* a a a a a a a a a a */
    printLongLine(data[0]);
    /* a a a a a a a a a a a a */
}

void CcVkjJvbnsxUQmlfOamY_teE()
{
    teEB2G();
    teEG2B();
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
#ifndef OMITteE
    printLine("Calling teE()...");
    CcVkjJvbnsxUQmlfOamY_teE();
    printLine("Finished teE()");
#endif /* a */
#ifndef OMITiYT
    printLine("Calling iYT()...");
    CcVkjJvbnsxUQmlfOamY_iYT();
    printLine("Finished iYT()");
#endif /* a */
    return 0;
}

#endif
