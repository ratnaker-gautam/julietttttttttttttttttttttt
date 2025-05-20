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

#ifndef OMITayg

void TIeWLDpTWssioKpgphmO_ayg()
{
    switch(6)
    {
    case 6:
    {
        /* a a a a a a a a a a
         * a a a a a a a a a a a a a a */
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        /* a a a a a a a */
        fread((char *)data, sizeof(char), (size_t)(100-1), stdin);
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITQlZ

/* a a a a a a */
static void QlZ1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
    {
        /* a a a a a a a a a a
         * a a a a a a a a a a a a a a */
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        /* a a a a a */
        if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) != 100-1)
        {
            printLine("fread failed!");
        }
    }
    break;
    }
}

/* a a a a a a a */
static void QlZ2()
{
    switch(6)
    {
    case 6:
    {
        /* a a a a a a a a a a
         * a a a a a a a a a a a a a a */
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        /* a a a a a */
        if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) != 100-1)
        {
            printLine("fread failed!");
        }
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void TIeWLDpTWssioKpgphmO_QlZ()
{
    QlZ1();
    QlZ2();
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
#ifndef OMITQlZ
    printLine("Calling QlZ()...");
    TIeWLDpTWssioKpgphmO_QlZ();
    printLine("Finished QlZ()");
#endif /* a */
#ifndef OMITayg
    printLine("Calling ayg()...");
    TIeWLDpTWssioKpgphmO_ayg();
    printLine("Finished ayg()");
#endif /* a */
    return 0;
}

#endif
