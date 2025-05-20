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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITnwk

void OstpFMERCFTCREiXsfet_nwk()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a a a */
            fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin);
        }
    }
}

#endif /* a */

#ifndef OMITRhs

/* a a a a a a a a */
static void Rhs1()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a */
            if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}

void OstpFMERCFTCREiXsfet_Rhs()
{
    Rhs1();
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
#ifndef OMITRhs
    printLine("Calling Rhs()...");
    OstpFMERCFTCREiXsfet_Rhs();
    printLine("Finished Rhs()");
#endif /* a */
#ifndef OMITnwk
    printLine("Calling nwk()...");
    OstpFMERCFTCREiXsfet_nwk();
    printLine("Finished nwk()");
#endif /* a */
    return 0;
}

#endif
