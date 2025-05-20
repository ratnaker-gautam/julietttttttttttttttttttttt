/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a
 *    a a a a a a a a a
 *    a a a a a a a a a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define STAT _stat
#define OPEN _open
#define WRITE _write
#define O_RDWR _O_RDWR
#define CLOSE _close
#else
#include <unistd.h>
#define STAT stat
#define OPEN open
#define WRITE write
#define CLOSE close
#endif

#define XuI_SINK_STRING "XuI Sink..."
#define MkI_SINK_STRING "MkI Sink..."

#ifndef OMITXuI

void KlnimjUcspFwQygeEuma_XuI()
{
    goto sink;
sink:
    {
        char filename[100] = "";
        struct STAT statBuffer;
        int fileDesc = -1;
        if (fgets(filename, 100, stdin) == NULL)
        {
            printLine("fgets() failed");
            /* a a a a a a */
            filename[0] = '\0';
        }
        if (strlen(filename) > 0)
        {
            filename[strlen(filename)-1] = '\0'; /* a a */
        }
        /* a a a a a a a a a a a a */
        if (STAT(filename, &statBuffer) == -1)
        {
            exit(1);
        }
        fileDesc  = OPEN(filename, O_RDWR);
        if (fileDesc == -1)
        {
            exit(1);
        }
        if (WRITE(fileDesc, XuI_SINK_STRING, strlen(XuI_SINK_STRING)) == -1)
        {
            exit(1);
        }
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
}

#endif /* a */

#ifndef OMITMkI

/* a a a a a a a a */
static void MkI1()
{
    goto sink;
sink:
    {
        char filename[100] = "";
        int fileDesc = -1;
        if (fgets(filename, 100, stdin) == NULL)
        {
            printLine("fgets() failed");
            /* a a a a a a */
            filename[0] = '\0';
        }
        if (strlen(filename) > 0)
        {
            filename[strlen(filename)-1] = '\0'; /* a a */
        }
        /* a a a a a a a a a */
        fileDesc  = OPEN(filename, O_RDWR);
        if (fileDesc == -1)
        {
            exit(1);
        }
        if (WRITE(fileDesc, MkI_SINK_STRING, strlen(MkI_SINK_STRING)) == -1)
        {
            exit(1);
        }
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
}

void KlnimjUcspFwQygeEuma_MkI()
{
    MkI1();
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
#ifndef OMITMkI
    printLine("Calling MkI()...");
    KlnimjUcspFwQygeEuma_MkI();
    printLine("Finished MkI()");
#endif /* a */
#ifndef OMITXuI
    printLine("Calling XuI()...");
    KlnimjUcspFwQygeEuma_XuI();
    printLine("Finished XuI()");
#endif /* a */
    return 0;
}

#endif
