/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a  a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

static HANDLE jjNzPHzBfZbDuObJMiAf_pPoData;
static HANDLE jjNzPHzBfZbDuObJMiAf_yiUB2GData;

#ifndef OMITpPo

static void pPoSink()
{
    HANDLE data = jjNzPHzBfZbDuObJMiAf_pPoData;
    if (data != INVALID_HANDLE_VALUE)
    {
        /* a a a a a a a a a a a */
        _close((int)data);
    }
}

void jjNzPHzBfZbDuObJMiAf_pPo()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("pPoSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    jjNzPHzBfZbDuObJMiAf_pPoData = data;
    pPoSink();
}

#endif /* a */

#ifndef OMITyiU

/* a a a a a a a */
static void yiUB2GSink()
{
    HANDLE data = jjNzPHzBfZbDuObJMiAf_yiUB2GData;
    if (data != INVALID_HANDLE_VALUE)
    {
        /* a a a a a a */
        CloseHandle(data);
    }
}

static void yiUB2G()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("pPoSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    jjNzPHzBfZbDuObJMiAf_yiUB2GData = data;
    yiUB2GSink();
}

void jjNzPHzBfZbDuObJMiAf_yiU()
{
    yiUB2G();
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
#ifndef OMITyiU
    printLine("Calling yiU()...");
    jjNzPHzBfZbDuObJMiAf_yiU();
    printLine("Finished yiU()");
#endif /* a */
#ifndef OMITpPo
    printLine("Calling pPo()...");
    jjNzPHzBfZbDuObJMiAf_pPo();
    printLine("Finished pPo()");
#endif /* a */
    return 0;
}

#endif
