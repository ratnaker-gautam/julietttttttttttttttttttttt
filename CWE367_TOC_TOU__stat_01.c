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

#define qOB_SINK_STRING "qOB Sink..."
#define Yce_SINK_STRING "Yce Sink..."

#ifndef OMITqOB

void geRorhJLeGeIxrtfUyZK_qOB()
{
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
        if (WRITE(fileDesc, qOB_SINK_STRING, strlen(qOB_SINK_STRING)) == -1)
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

#ifndef OMITYce

static void Yce1()
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
        if (WRITE(fileDesc, Yce_SINK_STRING, strlen(Yce_SINK_STRING)) == -1)
        {
            exit(1);
        }
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
}

void geRorhJLeGeIxrtfUyZK_Yce()
{
    Yce1();
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
#ifndef OMITYce
    printLine("Calling Yce()...");
    geRorhJLeGeIxrtfUyZK_Yce();
    printLine("Finished Yce()");
#endif /* a */
#ifndef OMITqOB
    printLine("Calling qOB()...");
    geRorhJLeGeIxrtfUyZK_qOB();
    printLine("Finished qOB()");
#endif /* a */
    return 0;
}

#endif
