/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#include <windows.h>
#define SLEEP Sleep
#else
#include <unistd.h>
#define SLEEP usleep
#endif

#ifndef OMITIOl

static int IOlSource(int count)
{
    /* a a a a a a a a */
    count = RAND32();
    return count;
}

void gFLJeWwQeMDGNxXoQzbK_IOl()
{
    int count;
    /* a a */
    count = -1;
    count = IOlSource(count);
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

#endif /* a */

#ifndef OMITaLS

/* a a a a a a a */
static int aLSG2BSource(int count)
{
    /* a a a a a a */
    count = 20;
    return count;
}

static void aLSG2B()
{
    int count;
    /* a a */
    count = -1;
    count = aLSG2BSource(count);
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

/* a a a a a a a */
static int aLSB2GSource(int count)
{
    /* a a a a a a a a */
    count = RAND32();
    return count;
}

static void aLSB2G()
{
    int count;
    /* a a */
    count = -1;
    count = aLSB2GSource(count);
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

void gFLJeWwQeMDGNxXoQzbK_aLS()
{
    aLSB2G();
    aLSG2B();
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
#ifndef OMITaLS
    printLine("Calling aLS()...");
    gFLJeWwQeMDGNxXoQzbK_aLS();
    printLine("Finished aLS()");
#endif /* a */
#ifndef OMITIOl
    printLine("Calling IOl()...");
    gFLJeWwQeMDGNxXoQzbK_IOl();
    printLine("Finished IOl()");
#endif /* a */
    return 0;
}

#endif
