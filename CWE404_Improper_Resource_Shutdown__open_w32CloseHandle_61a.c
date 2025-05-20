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
 * a a a a a a a a a a a a a a a a
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

#include <windows.h>

#ifndef OMITvZF

/* a a a */
int sELYGpafiKHXghpzRcnQ_w32CloseHandle_61b_vZFSource(int data);

void sELYGpafiKHXghpzRcnQ_w32CloseHandle_61_vZF()
{
    int data;
    /* a a */
    data = -1;
    data = sELYGpafiKHXghpzRcnQ_w32CloseHandle_61b_vZFSource(data);
    if (data != -1)
    {
        /* a a a a a a a a a a a */
        CloseHandle((HANDLE)data);
    }
}

#endif /* a */

#ifndef OMIThyG

/* a a a a a a a */
int sELYGpafiKHXghpzRcnQ_w32CloseHandle_61b_hyGB2GSource(int data);

static void hyGB2G()
{
    int data;
    /* a a */
    data = -1;
    data = sELYGpafiKHXghpzRcnQ_w32CloseHandle_61b_hyGB2GSource(data);
    if (data != -1)
    {
        /* a a a a a a */
        CLOSE(data);
    }
}

void sELYGpafiKHXghpzRcnQ_w32CloseHandle_61_hyG()
{
    hyGB2G();
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
#ifndef OMIThyG
    printLine("Calling hyG()...");
    sELYGpafiKHXghpzRcnQ_w32CloseHandle_61_hyG();
    printLine("Finished hyG()");
#endif /* a */
#ifndef OMITvZF
    printLine("Calling vZF()...");
    sELYGpafiKHXghpzRcnQ_w32CloseHandle_61_vZF();
    printLine("Finished vZF()");
#endif /* a */
    return 0;
}

#endif
