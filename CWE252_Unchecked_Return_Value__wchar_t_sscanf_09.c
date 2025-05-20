/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#define SRC L"sscanf"

#ifndef OMITwBo

void cnEltDhACTzjIGxhlmAq_wBo()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a a a */
            swscanf(SRC, L"%99s\0", data);
        }
    }
}

#endif /* a */

#ifndef OMITqPL

/* a a a a a a */
static void qPL1()
{
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a */
            if (swscanf(SRC, L"%99s\0", data) == EOF)
            {
                printLine("swscanf failed!");
            }
        }
    }
}

/* a a a a a a a a */
static void qPL2()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a */
            if (swscanf(SRC, L"%99s\0", data) == EOF)
            {
                printLine("swscanf failed!");
            }
        }
    }
}

void cnEltDhACTzjIGxhlmAq_qPL()
{
    qPL1();
    qPL2();
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
#ifndef OMITqPL
    printLine("Calling qPL()...");
    cnEltDhACTzjIGxhlmAq_qPL();
    printLine("Finished qPL()");
#endif /* a */
#ifndef OMITwBo
    printLine("Calling wBo()...");
    cnEltDhACTzjIGxhlmAq_wBo();
    printLine("Finished wBo()");
#endif /* a */
    return 0;
}

#endif
