/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITuao

void xwNAipSvLZVNwoscOlcV_uao()
{
    char data;
    data = ' ';
    goto source;
source:
    /* a a a a a a */
    data = (char)RAND32();
    goto sink;
sink:
    {
        /* a a a a a a a a */
        data--;
        char result = data;
        printHexCharLine(result);
    }
}

#endif /* a */

#ifndef OMITmxz

/* a a a a a a a a a a a a a a a */
static void mxzB2G()
{
    char data;
    data = ' ';
    goto source;
source:
    /* a a a a a a */
    data = (char)RAND32();
    goto sink;
sink:
    /* a a a a a a a a a a */
    if (data > CHAR_MIN)
    {
        data--;
        char result = data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

/* a a a a a a a a a a a a a a a */
static void mxzG2B()
{
    char data;
    data = ' ';
    goto source;
source:
    /* a a a a a a a a a a a a a a a */
    data = -2;
    goto sink;
sink:
    {
        /* a a a a a a a a */
        data--;
        char result = data;
        printHexCharLine(result);
    }
}

void xwNAipSvLZVNwoscOlcV_mxz()
{
    mxzB2G();
    mxzG2B();
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
#ifndef OMITmxz
    printLine("Calling mxz()...");
    xwNAipSvLZVNwoscOlcV_mxz();
    printLine("Finished mxz()");
#endif /* a */
#ifndef OMITuao
    printLine("Calling uao()...");
    xwNAipSvLZVNwoscOlcV_uao();
    printLine("Finished uao()");
#endif /* a */
    return 0;
}

#endif
