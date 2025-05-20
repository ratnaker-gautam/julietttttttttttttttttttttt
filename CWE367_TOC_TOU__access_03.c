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
 * a a a a a a a a
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

#define fCQ_SINK_STRING "fCQ Sink..."
#define AgX_SINK_STRING "AgX Sink..."

#ifdef _WIN32
#define ACCESS _access
#define W_OK 02
#else
#define ACCESS access
#endif

#ifndef OMITfCQ

void xLAQaqnpIvsmwlFcXtjX_fCQ()
{
    if(5==5)
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
            if (WRITE(fileDesc, fCQ_SINK_STRING, strlen(fCQ_SINK_STRING)) == -1)
            {
                exit(1);
            }
            if (fileDesc != -1)
            {
                CLOSE(fileDesc);
            }
        }
    }
}

#endif /* a */

#ifndef OMITAgX

/* a a a a a a */
static void AgX1()
{
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
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
            if (WRITE(fileDesc, AgX_SINK_STRING, strlen(AgX_SINK_STRING)) == -1)
            {
                exit(1);
            }
            if (fileDesc != -1)
            {
                CLOSE(fileDesc);
            }
        }
    }
}

/* a a a a a a a a */
static void AgX2()
{
    if(5==5)
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
            if (WRITE(fileDesc, AgX_SINK_STRING, strlen(AgX_SINK_STRING)) == -1)
            {
                exit(1);
            }
            if (fileDesc != -1)
            {
                CLOSE(fileDesc);
            }
        }
    }
}

void xLAQaqnpIvsmwlFcXtjX_AgX()
{
    AgX1();
    AgX2();
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
#ifndef OMITAgX
    printLine("Calling AgX()...");
    xLAQaqnpIvsmwlFcXtjX_AgX();
    printLine("Finished AgX()");
#endif /* a */
#ifndef OMITfCQ
    printLine("Calling fCQ()...");
    xLAQaqnpIvsmwlFcXtjX_fCQ();
    printLine("Finished fCQ()");
#endif /* a */
    return 0;
}

#endif
