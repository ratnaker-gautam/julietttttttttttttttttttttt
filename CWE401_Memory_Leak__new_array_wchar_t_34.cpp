/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a
 * a a a a a a a
 * a
 *    a a a a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

namespace pSmUMeGzjAuaAbmWjbOW
{

typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} unionType;

#ifndef OMITTzK

void TzK()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    /* a a a a a a a */
    data = new wchar_t[100];
    /* a a a a a a */
    wcscpy(data, L"A String");
    printWLine(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        /* a a a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITIIQ

/* a a a a a a a */
static void IIQG2B()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    /* a a a a a a a */
    wchar_t dataIIQBuffer[100];
    data = dataIIQBuffer;
    /* a a a a a a */
    wcscpy(data, L"A String");
    printWLine(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        /* a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a */
static void IIQB2G()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    /* a a a a a a a */
    data = new wchar_t[100];
    /* a a a a a a */
    wcscpy(data, L"A String");
    printWLine(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        /* a a a */
        delete[] data;
    }
}

void IIQ()
{
    IIQG2B();
    IIQB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace pSmUMeGzjAuaAbmWjbOW; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITIIQ
    printLine("Calling IIQ()...");
    IIQ();
    printLine("Finished IIQ()");
#endif /* a */
#ifndef OMITTzK
    printLine("Calling TzK()...");
    TzK();
    printLine("Finished TzK()");
#endif /* a */
    return 0;
}

#endif
