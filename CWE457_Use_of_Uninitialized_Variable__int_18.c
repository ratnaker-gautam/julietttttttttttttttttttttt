/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITAgb

void NvMAuUcmunaAwBPaeEOK_Agb()
{
    int data;
    goto source;
source:
    /* a a a a a */
    ; /* a a a a a a a */
    goto sink;
sink:
    /* a a a a a a a */
    printIntLine(data);
}

#endif /* a */

#ifndef OMITDdv

/* a a a a a a a a a a a a a a a */
static void DdvB2G()
{
    int data;
    goto source;
source:
    /* a a a a a */
    ; /* a a a a a a a */
    goto sink;
sink:
    /* a a a a a a a */
    data = 5;
    printIntLine(data);
}

/* a a a a a a a a a a a a a a a */
static void DdvG2B()
{
    int data;
    goto source;
source:
    /* a a a */
    data = 5;
    goto sink;
sink:
    /* a a a a a a a */
    printIntLine(data);
}

void NvMAuUcmunaAwBPaeEOK_Ddv()
{
    DdvB2G();
    DdvG2B();
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
#ifndef OMITDdv
    printLine("Calling Ddv()...");
    NvMAuUcmunaAwBPaeEOK_Ddv();
    printLine("Finished Ddv()");
#endif /* a */
#ifndef OMITAgb
    printLine("Calling Agb()...");
    NvMAuUcmunaAwBPaeEOK_Agb();
    printLine("Finished Agb()");
#endif /* a */
    return 0;
}

#endif
