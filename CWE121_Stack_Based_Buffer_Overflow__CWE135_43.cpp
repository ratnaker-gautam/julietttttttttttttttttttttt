/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a
 * a a a a a a a
 * a
 *    a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#define WIDE_STRING L"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
#define CHAR_STRING "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"

namespace eIoIpsLAYJxoljRbftSi
{

#ifndef OMITqbQ

static void qbQSource(void * &data)
{
    /* a a a a a a a a a a */
    data = (void *)WIDE_STRING;
}

void qbQ()
{
    void * data;
    data = NULL;
    qbQSource(data);
    {
        /* a a a a a a a* a a a a a a a a */
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printLine((char *)dest);
    }
}

#endif /* a */

#ifndef OMITmNu

/* a a a a a a a */
static void mNuG2BSource(void * &data)
{
    /* a a a a a a a a a */
    data = (void *)CHAR_STRING;
}

static void mNuG2B()
{
    void * data;
    data = NULL;
    mNuG2BSource(data);
    {
        /* a a a a a a a* a a a a a a a a */
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy((char *)dest, (char *)data);
        printLine((char *)dest);
    }
}

/* a a a a a a a */
static void mNuB2GSource(void * &data)
{
    /* a a a a a a a a a a */
    data = (void *)WIDE_STRING;
}

static void mNuB2G()
{
    void * data;
    data = NULL;
    mNuB2GSource(data);
    {
        /* a a a a a a*  */
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printWLine((wchar_t *)dest);
    }
}

void mNu()
{
    mNuG2B();
    mNuB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace eIoIpsLAYJxoljRbftSi; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITmNu
    printLine("Calling mNu()...");
    mNu();
    printLine("Finished mNu()");
#endif /* a */
#ifndef OMITqbQ
    printLine("Calling qbQ()...");
    qbQ();
    printLine("Finished qbQ()");
#endif /* a */
    return 0;
}

#endif
