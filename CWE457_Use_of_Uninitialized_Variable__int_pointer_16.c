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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITdcd

void OwiuvdVClTZVeKVaNnTj_dcd()
{
    int * data;
    while(1)
    {
        /* a a a a a */
        ; /* a a a a a a a */
        break;
    }
    while(1)
    {
        /* a a a a a a a */
        printIntLine(*data);
        break;
    }
}

#endif /* a */

#ifndef OMITkCA

/* a a a a a a a a a a a a a a a */
static void kCAB2G()
{
    int * data;
    while(1)
    {
        /* a a a a a */
        ; /* a a a a a a a */
        break;
    }
    while(1)
    {
        /* a a a a a a a */
        /* a a a a a a a a a */
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        printIntLine(*data);
        break;
    }
}

/* a a a a a a a a a a a a a a a */
static void kCAG2B()
{
    int * data;
    while(1)
    {
        /* a a a */
        /* a a a a a a a a a */
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        break;
    }
    while(1)
    {
        /* a a a a a a a */
        printIntLine(*data);
        break;
    }
}

void OwiuvdVClTZVeKVaNnTj_kCA()
{
    kCAB2G();
    kCAG2B();
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
#ifndef OMITkCA
    printLine("Calling kCA()...");
    OwiuvdVClTZVeKVaNnTj_kCA();
    printLine("Finished kCA()");
#endif /* a */
#ifndef OMITdcd
    printLine("Calling dcd()...");
    OwiuvdVClTZVeKVaNnTj_dcd();
    printLine("Finished dcd()");
#endif /* a */
    return 0;
}

#endif
