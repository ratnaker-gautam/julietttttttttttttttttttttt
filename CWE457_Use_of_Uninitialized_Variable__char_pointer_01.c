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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITYos

void odpObDdCYOsZVSEMaWXT_Yos()
{
    char * data;
    /* a a a a a */
    ; /* a a a a a a a */
    /* a a a a a a a */
    printLine(data);
}

#endif /* a */

#ifndef OMITPXa

/* a a a a a a a */
static void PXaG2B()
{
    char * data;
    /* a a a */
    data = "string";
    /* a a a a a a a */
    printLine(data);
}

/* a a a a a a a */
static void PXaB2G()
{
    char * data;
    /* a a a a a */
    ; /* a a a a a a a */
    /* a a a a a a a */
    data = "string";
    printLine(data);
}

void odpObDdCYOsZVSEMaWXT_PXa()
{
    PXaG2B();
    PXaB2G();
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
#ifndef OMITPXa
    printLine("Calling PXa()...");
    odpObDdCYOsZVSEMaWXT_PXa();
    printLine("Finished PXa()");
#endif /* a */
#ifndef OMITYos
    printLine("Calling Yos()...");
    odpObDdCYOsZVSEMaWXT_Yos();
    printLine("Finished Yos()");
#endif /* a */
    return 0;
}

#endif
