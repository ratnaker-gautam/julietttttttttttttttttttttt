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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITvKf

void dbFwSgpRnNJUeztOhAoX_vKf()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        /* a a a a a a */
        data = NULL;
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a */
        printWcharLine(data[0]);
    }
}

#endif /* a */

#ifndef OMITEJy

/* a a a a a a a a a a a a a */
static void EJyB2G1()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        /* a a a a a a */
        data = NULL;
    }
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            /* a a a a a a a a a a */
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void EJyB2G2()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        /* a a a a a a */
        data = NULL;
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            /* a a a a a a a a a a */
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a */
static void EJyG2B1()
{
    wchar_t * data;
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        data = L"EJy";
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a */
        printWcharLine(data[0]);
    }
}

/* a a a a a a a a a a a a a a */
static void EJyG2B2()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        /* a a a */
        data = L"EJy";
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a */
        printWcharLine(data[0]);
    }
}

void dbFwSgpRnNJUeztOhAoX_EJy()
{
    EJyB2G1();
    EJyB2G2();
    EJyG2B1();
    EJyG2B2();
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
#ifndef OMITEJy
    printLine("Calling EJy()...");
    dbFwSgpRnNJUeztOhAoX_EJy();
    printLine("Finished EJy()");
#endif /* a */
#ifndef OMITvKf
    printLine("Calling vKf()...");
    dbFwSgpRnNJUeztOhAoX_vKf();
    printLine("Finished vKf()");
#endif /* a */
    return 0;
}

#endif
