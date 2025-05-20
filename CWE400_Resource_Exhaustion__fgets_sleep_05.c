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
 * a a a a a a a a
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

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITKVl

void quVykGQRlQQDGUcqKHNp_KVl()
{
    int count;
    /* a a */
    count = -1;
    if(staticTrue)
    {
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
    }
    if(staticTrue)
    {
        /* a a a a a a a a a a a a */
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}

#endif /* a */

#ifndef OMITwnv

/* a a a a a a a a a a a a a */
static void wnvB2G1()
{
    int count;
    /* a a */
    count = -1;
    if(staticTrue)
    {
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
    }
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
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
}

/* a a a a a a a a a a a a a a */
static void wnvB2G2()
{
    int count;
    /* a a */
    count = -1;
    if(staticTrue)
    {
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
    }
    if(staticTrue)
    {
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
}

/* a a a a a a a a a a a a a */
static void wnvG2B1()
{
    int count;
    /* a a */
    count = -1;
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a */
        count = 20;
    }
    if(staticTrue)
    {
        /* a a a a a a a a a a a a */
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}

/* a a a a a a a a a a a a a a */
static void wnvG2B2()
{
    int count;
    /* a a */
    count = -1;
    if(staticTrue)
    {
        /* a a a a a a */
        count = 20;
    }
    if(staticTrue)
    {
        /* a a a a a a a a a a a a */
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}

void quVykGQRlQQDGUcqKHNp_wnv()
{
    wnvB2G1();
    wnvB2G2();
    wnvG2B1();
    wnvG2B2();
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
#ifndef OMITwnv
    printLine("Calling wnv()...");
    quVykGQRlQQDGUcqKHNp_wnv();
    printLine("Finished wnv()");
#endif /* a */
#ifndef OMITKVl
    printLine("Calling KVl()...");
    quVykGQRlQQDGUcqKHNp_KVl();
    printLine("Finished KVl()");
#endif /* a */
    return 0;
}

#endif
