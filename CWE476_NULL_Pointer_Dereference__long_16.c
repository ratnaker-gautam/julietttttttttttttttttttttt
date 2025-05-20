/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a
 * a a a
 * a
 *    a a a a a a a a a
 *    a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITXPr

void xUoAkJkNnkHIEXpmGGvT_XPr()
{
    long * data;
    while(1)
    {
        /* a a a a a a */
        data = NULL;
        break;
    }
    while(1)
    {
        /* a a a a a a a a a a */
        printLongLine(*data);
        break;
    }
}

#endif /* a */

#ifndef OMITUZu

/* a a a a a a a a a a a a a a a */
static void UZuB2G()
{
    long * data;
    while(1)
    {
        /* a a a a a a */
        data = NULL;
        break;
    }
    while(1)
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
        break;
    }
}

/* a a a a a a a a a a a a a a a */
static void UZuG2B()
{
    long * data;
    long tmpData = 5L;
    while(1)
    {
        /* a a a */
        {
            data = &tmpData;
        }
        break;
    }
    while(1)
    {
        /* a a a a a a a a a a */
        printLongLine(*data);
        break;
    }
}

void xUoAkJkNnkHIEXpmGGvT_UZu()
{
    UZuB2G();
    UZuG2B();
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
#ifndef OMITUZu
    printLine("Calling UZu()...");
    xUoAkJkNnkHIEXpmGGvT_UZu();
    printLine("Finished UZu()");
#endif /* a */
#ifndef OMITXPr
    printLine("Calling XPr()...");
    xUoAkJkNnkHIEXpmGGvT_XPr();
    printLine("Finished XPr()");
#endif /* a */
    return 0;
}

#endif
