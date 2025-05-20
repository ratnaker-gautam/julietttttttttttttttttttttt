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
 * a a a a a a a a
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

#ifndef OMITjOR

void lXuZtneazJJBUfvDuxZF_jOR()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a a a a a a a a a a a a */
    data = OPEN("jORSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if(globalFive==5)
    {
        if (data != -1)
        {
            /* a a a a a a a a a a a */
            fclose((FILE *)data);
        }
    }
}

#endif /* a */

#ifndef OMITwaE

/* a a a a a a a a a a a */
static void waEB2G1()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a a a a a a a a a a a a */
    data = OPEN("jORSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != -1)
        {
            /* a a a a a a */
            CLOSE(data);
        }
    }
}

/* a a a a a a a a a a a  */
static void waEB2G2()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a a a a a a a a a a a a */
    data = OPEN("jORSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if(globalFive==5)
    {
        if (data != -1)
        {
            /* a a a a a a */
            CLOSE(data);
        }
    }
}

void lXuZtneazJJBUfvDuxZF_waE()
{
    waEB2G1();
    waEB2G2();
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
#ifndef OMITwaE
    printLine("Calling waE()...");
    lXuZtneazJJBUfvDuxZF_waE();
    printLine("Finished waE()");
#endif /* a */
#ifndef OMITjOR
    printLine("Calling jOR()...");
    lXuZtneazJJBUfvDuxZF_jOR();
    printLine("Finished jOR()");
#endif /* a */
    return 0;
}

#endif
