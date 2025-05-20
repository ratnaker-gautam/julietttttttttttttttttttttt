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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define OPEN _open
#define CLOSE _close
#else
#include <unistd.h>
#define OPEN open
#define CLOSE close
#endif

#ifndef OMITDup

void ZsfrCiQvfjVzfeySBwQX_Dup()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a a a a a a a a a a a a */
    data = OPEN("DupSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    while(1)
    {
        if (data != -1)
        {
            /* a a a a a a a a a a a */
            fclose((FILE *)data);
        }
        break;
    }
}

#endif /* a */

#ifndef OMITbgf

/* a a a a a a a a a a a a a a */
static void bgfB2G()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a a a a a a a a a a a a */
    data = OPEN("DupSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    while(1)
    {
        if (data != -1)
        {
            /* a a a a a a */
            CLOSE(data);
        }
        break;
    }
}

void ZsfrCiQvfjVzfeySBwQX_bgf()
{
    bgfB2G();
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
#ifndef OMITbgf
    printLine("Calling bgf()...");
    ZsfrCiQvfjVzfeySBwQX_bgf();
    printLine("Finished bgf()");
#endif /* a */
#ifndef OMITDup
    printLine("Calling Dup()...");
    ZsfrCiQvfjVzfeySBwQX_Dup();
    printLine("Finished Dup()");
#endif /* a */
    return 0;
}

#endif
