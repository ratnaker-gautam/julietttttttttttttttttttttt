/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a
 * a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITXZY

void oHBhcxtdwYFclrxtCiXM_XZY()
{
    int * data;
    data = NULL;
    while(1)
    {
        /* a a a a a a */
        data = (int *)ALLOCA(10);
        break;
    }
    {
        int source[10] = {0};
        /* a a a a a a a a a a a a a a */
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}

#endif /* a */

#ifndef OMITUNH

/* a a a a a a a a a a a a a a */
static void UNHG2B()
{
    int * data;
    data = NULL;
    while(1)
    {
        /* a a a a a */
        data = (int *)ALLOCA(10*sizeof(int));
        break;
    }
    {
        int source[10] = {0};
        /* a a a a a a a a a a a a a a */
        memcpy(data, source, 10*sizeof(int));
        printIntLine(data[0]);
    }
}

void oHBhcxtdwYFclrxtCiXM_UNH()
{
    UNHG2B();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITUNH
    printLine("Calling UNH()...");
    oHBhcxtdwYFclrxtCiXM_UNH();
    printLine("Finished UNH()");
#endif /* a */
#ifndef OMITXZY
    printLine("Calling XZY()...");
    oHBhcxtdwYFclrxtCiXM_XZY();
    printLine("Finished XZY()");
#endif /* a */
    return 0;
}

#endif
