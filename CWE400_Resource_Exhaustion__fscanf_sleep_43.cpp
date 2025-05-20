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
 * a a a a a a a a a a a a a a a a a a a a a
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

namespace FDdoIVBcVJvxRyVQkAfb
{

#ifndef OMITmyV

static void myVSource(int &count)
{
    /* a a a a a a a a a */
    fscanf(stdin, "%d", &count);
}

void myV()
{
    int count;
    /* a a */
    count = -1;
    myVSource(count);
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

#endif /* a */

#ifndef OMITImf

/* a a a a a a a */
static void ImfG2BSource(int &count)
{
    /* a a a a a a */
    count = 20;
}

static void ImfG2B()
{
    int count;
    /* a a */
    count = -1;
    ImfG2BSource(count);
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

/* a a a a a a a */
static void ImfB2GSource(int &count)
{
    /* a a a a a a a a a */
    fscanf(stdin, "%d", &count);
}

static void ImfB2G()
{
    int count;
    /* a a */
    count = -1;
    ImfB2GSource(count);
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

void Imf()
{
    ImfG2B();
    ImfB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace FDdoIVBcVJvxRyVQkAfb; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITImf
    printLine("Calling Imf()...");
    Imf();
    printLine("Finished Imf()");
#endif /* a */
#ifndef OMITmyV
    printLine("Calling myV()...");
    myV();
    printLine("Finished myV()");
#endif /* a */
    return 0;
}

#endif
