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

#ifndef OMITSmZ

void WOXDdJThnwAPRmIEkWJT_SmZ()
{
    wchar_t * data;
    while(1)
    {
        /* a a a a a */
        ; /* a a a a a a a */
        break;
    }
    while(1)
    {
        /* a a a a a a a */
        printWLine(data);
        break;
    }
}

#endif /* a */

#ifndef OMITXuy

/* a a a a a a a a a a a a a a a */
static void XuyB2G()
{
    wchar_t * data;
    while(1)
    {
        /* a a a a a */
        ; /* a a a a a a a */
        break;
    }
    while(1)
    {
        /* a a a a a a a */
        data = L"string";
        printWLine(data);
        break;
    }
}

/* a a a a a a a a a a a a a a a */
static void XuyG2B()
{
    wchar_t * data;
    while(1)
    {
        /* a a a */
        data = L"string";
        break;
    }
    while(1)
    {
        /* a a a a a a a */
        printWLine(data);
        break;
    }
}

void WOXDdJThnwAPRmIEkWJT_Xuy()
{
    XuyB2G();
    XuyG2B();
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
#ifndef OMITXuy
    printLine("Calling Xuy()...");
    WOXDdJThnwAPRmIEkWJT_Xuy();
    printLine("Finished Xuy()");
#endif /* a */
#ifndef OMITSmZ
    printLine("Calling SmZ()...");
    WOXDdJThnwAPRmIEkWJT_SmZ();
    printLine("Finished SmZ()");
#endif /* a */
    return 0;
}

#endif
