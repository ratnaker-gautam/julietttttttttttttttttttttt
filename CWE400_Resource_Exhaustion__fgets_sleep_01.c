/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(count) + 2)

#ifdef _WIN32
#include <windows.h>
#define SLEEP Sleep
#else
#include <unistd.h>
#define SLEEP usleep
#endif

#ifndef OMITfAO

void oUGqeOZcKGTpnRXzQbsC_fAO()
{
    int count;
    /* a a */
    count = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

#endif /* a */

#ifndef OMITxNr

/* a a a a a a a */
static void xNrG2B()
{
    int count;
    /* a a */
    count = -1;
    /* a a a a a a */
    count = 20;
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

/* a a a a a a a */
static void xNrB2G()
{
    int count;
    /* a a */
    count = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    /* a a a a a a a a a a a a a */
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}

void oUGqeOZcKGTpnRXzQbsC_xNr()
{
    xNrG2B();
    xNrB2G();
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
#ifndef OMITxNr
    printLine("Calling xNr()...");
    oUGqeOZcKGTpnRXzQbsC_xNr();
    printLine("Finished xNr()");
#endif /* a */
#ifndef OMITfAO
    printLine("Calling fAO()...");
    oUGqeOZcKGTpnRXzQbsC_fAO();
    printLine("Finished fAO()");
#endif /* a */
    return 0;
}

#endif
