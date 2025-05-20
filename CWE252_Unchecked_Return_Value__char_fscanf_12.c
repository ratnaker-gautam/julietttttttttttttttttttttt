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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITado

void GXOTiGZUYVCgVvjgICxz_ado()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a a a */
            fscanf(stdin, "%99s\0", data);
        }
    }
    else
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a */
            if (fscanf(stdin, "%99s\0", data) == EOF)
            {
                printLine("fscanf failed!");
            }
        }
    }
}

#endif /* a */

#ifndef OMITlzQ

/* a a a a a a a a a a a */
static void lzQ1()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a */
            if (fscanf(stdin, "%99s\0", data) == EOF)
            {
                printLine("fscanf failed!");
            }
        }
    }
    else
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* a a a a a */
            if (fscanf(stdin, "%99s\0", data) == EOF)
            {
                printLine("fscanf failed!");
            }
        }
    }
}

void GXOTiGZUYVCgVvjgICxz_lzQ()
{
    lzQ1();
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
#ifndef OMITlzQ
    printLine("Calling lzQ()...");
    GXOTiGZUYVCgVvjgICxz_lzQ();
    printLine("Finished lzQ()");
#endif /* a */
#ifndef OMITado
    printLine("Calling ado()...");
    GXOTiGZUYVCgVvjgICxz_ado();
    printLine("Finished ado()");
#endif /* a */
    return 0;
}

#endif
