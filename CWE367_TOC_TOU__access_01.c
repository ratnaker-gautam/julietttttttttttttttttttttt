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
 * a a a a
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

#define aqI_SINK_STRING "aqI Sink..."
#define rdv_SINK_STRING "rdv Sink..."

#ifdef _WIN32
#define ACCESS _access
#define W_OK 02
#else
#define ACCESS access
#endif

#ifndef OMITaqI

void rggLvLfxCtpJDQkinSFv_aqI()
{
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
        /* a a a a a a a a a a a a */
        if (ACCESS(filename, W_OK) == -1)
        {
            exit(1);
        }
        fileDesc  = OPEN(filename, O_RDWR);
        if (fileDesc == -1)
        {
            exit(1);
        }
        if (WRITE(fileDesc, aqI_SINK_STRING, strlen(aqI_SINK_STRING)) == -1)
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

#ifndef OMITrdv

static void rdv1()
{
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
        if (WRITE(fileDesc, rdv_SINK_STRING, strlen(rdv_SINK_STRING)) == -1)
        {
            exit(1);
        }
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
}

void rggLvLfxCtpJDQkinSFv_rdv()
{
    rdv1();
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
#ifndef OMITrdv
    printLine("Calling rdv()...");
    rggLvLfxCtpJDQkinSFv_rdv();
    printLine("Finished rdv()");
#endif /* a */
#ifndef OMITaqI
    printLine("Calling aqI()...");
    rggLvLfxCtpJDQkinSFv_aqI();
    printLine("Finished aqI()");
#endif /* a */
    return 0;
}

#endif
