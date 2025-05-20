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
 * a a a a a a
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

#define VaE_SINK_STRING "VaE Sink..."
#define tjx_SINK_STRING "tjx Sink..."

#ifdef _WIN32
#define ACCESS _access
#define W_OK 02
#else
#define ACCESS access
#endif

#ifndef OMITVaE

void ZsfEvoiBknGilJONFjNP_VaE()
{
    switch(6)
    {
    case 6:
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
        if (WRITE(fileDesc, VaE_SINK_STRING, strlen(VaE_SINK_STRING)) == -1)
        {
            exit(1);
        }
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITtjx

/* a a a a a a */
static void tjx1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
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
        if (WRITE(fileDesc, tjx_SINK_STRING, strlen(tjx_SINK_STRING)) == -1)
        {
            exit(1);
        }
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
    break;
    }
}

/* a a a a a a a */
static void tjx2()
{
    switch(6)
    {
    case 6:
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
        if (WRITE(fileDesc, tjx_SINK_STRING, strlen(tjx_SINK_STRING)) == -1)
        {
            exit(1);
        }
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void ZsfEvoiBknGilJONFjNP_tjx()
{
    tjx1();
    tjx2();
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
#ifndef OMITtjx
    printLine("Calling tjx()...");
    ZsfEvoiBknGilJONFjNP_tjx();
    printLine("Finished tjx()");
#endif /* a */
#ifndef OMITVaE
    printLine("Calling VaE()...");
    ZsfEvoiBknGilJONFjNP_VaE();
    printLine("Finished VaE()");
#endif /* a */
    return 0;
}

#endif
