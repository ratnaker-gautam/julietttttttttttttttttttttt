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

#define Wxh_SINK_STRING "Wxh Sink..."
#define TXV_SINK_STRING "TXV Sink..."

#ifdef _WIN32
#define ACCESS _access
#define W_OK 02
#else
#define ACCESS access
#endif

#ifndef OMITWxh

void tANnKNgcuSEjvpAhdZEy_Wxh()
{
    int j;
    for(j = 0; j < 1; j++)
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
            if (WRITE(fileDesc, Wxh_SINK_STRING, strlen(Wxh_SINK_STRING)) == -1)
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

#ifndef OMITTXV

/* a a a a a a a a */
static void TXV1()
{
    int k;
    for(k = 0; k < 1; k++)
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
            if (WRITE(fileDesc, TXV_SINK_STRING, strlen(TXV_SINK_STRING)) == -1)
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

void tANnKNgcuSEjvpAhdZEy_TXV()
{
    TXV1();
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
#ifndef OMITTXV
    printLine("Calling TXV()...");
    tANnKNgcuSEjvpAhdZEy_TXV();
    printLine("Finished TXV()");
#endif /* a */
#ifndef OMITWxh
    printLine("Calling Wxh()...");
    tANnKNgcuSEjvpAhdZEy_Wxh();
    printLine("Finished Wxh()");
#endif /* a */
    return 0;
}

#endif
