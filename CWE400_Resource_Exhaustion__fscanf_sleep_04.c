/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#include <windows.h>
#define SLEEP Sleep
#else
#include <unistd.h>
#define SLEEP usleep
#endif

/* a a a a a a a a a a a
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITAOv

void XxxwUjyFvhmGPeMoqvTU_AOv()
{
    int count;
    /* a a */
    count = -1;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &count);
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a a a */
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}

#endif /* a */

#ifndef OMITJuq

/* a a a a a a a a a a a a a */
static void JuqB2G1()
{
    int count;
    /* a a */
    count = -1;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &count);
    }
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a */
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void JuqB2G2()
{
    int count;
    /* a a */
    count = -1;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &count);
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a a a a */
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}

/* a a a a a a a a a a a a a */
static void JuqG2B1()
{
    int count;
    /* a a */
    count = -1;
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a */
        count = 20;
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a a a */
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}

/* a a a a a a a a a a a a a a */
static void JuqG2B2()
{
    int count;
    /* a a */
    count = -1;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        count = 20;
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a a a */
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}

void XxxwUjyFvhmGPeMoqvTU_Juq()
{
    JuqB2G1();
    JuqB2G2();
    JuqG2B1();
    JuqG2B2();
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
#ifndef OMITJuq
    printLine("Calling Juq()...");
    XxxwUjyFvhmGPeMoqvTU_Juq();
    printLine("Finished Juq()");
#endif /* a */
#ifndef OMITAOv
    printLine("Calling AOv()...");
    XxxwUjyFvhmGPeMoqvTU_AOv();
    printLine("Finished AOv()");
#endif /* a */
    return 0;
}

#endif
