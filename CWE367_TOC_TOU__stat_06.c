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

#define pGO_SINK_STRING "pGO Sink..."
#define akL_SINK_STRING "akL Sink..."

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITpGO

void oEAouPjvAXNWyMCEiYkT_pGO()
{
    if(STATIC_CONST_FIVE==5)
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
            if (WRITE(fileDesc, pGO_SINK_STRING, strlen(pGO_SINK_STRING)) == -1)
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

#ifndef OMITakL

/* a a a a a a */
static void akL1()
{
    if(STATIC_CONST_FIVE!=5)
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
            if (WRITE(fileDesc, akL_SINK_STRING, strlen(akL_SINK_STRING)) == -1)
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
static void akL2()
{
    if(STATIC_CONST_FIVE==5)
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
            if (WRITE(fileDesc, akL_SINK_STRING, strlen(akL_SINK_STRING)) == -1)
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

void oEAouPjvAXNWyMCEiYkT_akL()
{
    akL1();
    akL2();
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
#ifndef OMITakL
    printLine("Calling akL()...");
    oEAouPjvAXNWyMCEiYkT_akL();
    printLine("Finished akL()");
#endif /* a */
#ifndef OMITpGO
    printLine("Calling pGO()...");
    oEAouPjvAXNWyMCEiYkT_pGO();
    printLine("Finished pGO()");
#endif /* a */
    return 0;
}

#endif
