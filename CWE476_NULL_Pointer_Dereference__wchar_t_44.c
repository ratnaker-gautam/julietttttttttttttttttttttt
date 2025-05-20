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
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITcoc

static void cocSink(wchar_t * data)
{
    /* a a a a a a a a a a */
    /* a a a a a a a a a a */
    printWcharLine(data[0]);
}

void dfOkdeecwYHssrsbLLyQ_coc()
{
    wchar_t * data;
    /* a a a a */
    void (*funcPtr) (wchar_t *) = cocSink;
    /* a a a a a a */
    data = NULL;
    /* a a a a */
    funcPtr(data);
}

#endif /* a */

#ifndef OMITKuc

/* a a a a a a a */
static void KucG2BSink(wchar_t * data)
{
    /* a a a a a a a a a a */
    /* a a a a a a a a a a */
    printWcharLine(data[0]);
}

static void KucG2B()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = KucG2BSink;
    /* a a a */
    data = L"Kuc";
    funcPtr(data);
}

/* a a a a a a a */
static void KucB2GSink(wchar_t * data)
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

static void KucB2G()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = KucB2GSink;
    /* a a a a a a */
    data = NULL;
    funcPtr(data);
}

void dfOkdeecwYHssrsbLLyQ_Kuc()
{
    KucG2B();
    KucB2G();
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
#ifndef OMITKuc
    printLine("Calling Kuc()...");
    dfOkdeecwYHssrsbLLyQ_Kuc();
    printLine("Finished Kuc()");
#endif /* a */
#ifndef OMITcoc
    printLine("Calling coc()...");
    dfOkdeecwYHssrsbLLyQ_coc();
    printLine("Finished coc()");
#endif /* a */
    return 0;
}

#endif
