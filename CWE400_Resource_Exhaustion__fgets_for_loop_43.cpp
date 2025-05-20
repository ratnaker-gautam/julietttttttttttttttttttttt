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
 *    a a a a a a a a a a a a a a
 *    a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(count) + 2)

namespace xUMuLoxbzVifYEGHenWl
{

#ifndef OMITYtj

static void YtjSource(int &count)
{
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
}

void Ytj()
{
    int count;
    /* a a */
    count = -1;
    YtjSource(count);
    {
        size_t i = 0;
        /* a a a a a a a a a a a a a */
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}

#endif /* a */

#ifndef OMITdGR

/* a a a a a a a */
static void dGRG2BSource(int &count)
{
    /* a a a a a a */
    count = 20;
}

static void dGRG2B()
{
    int count;
    /* a a */
    count = -1;
    dGRG2BSource(count);
    {
        size_t i = 0;
        /* a a a a a a a a a a a a a */
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}

/* a a a a a a a */
static void dGRB2GSource(int &count)
{
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
}

static void dGRB2G()
{
    int count;
    /* a a */
    count = -1;
    dGRB2GSource(count);
    {
        size_t i = 0;
        /* a a a a a a a a a a a */
        if (count > 0 && count <= 20)
        {
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}

void dGR()
{
    dGRG2B();
    dGRB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace xUMuLoxbzVifYEGHenWl; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITdGR
    printLine("Calling dGR()...");
    dGR();
    printLine("Finished dGR()");
#endif /* a */
#ifndef OMITYtj
    printLine("Calling Ytj()...");
    Ytj();
    printLine("Finished Ytj()");
#endif /* a */
    return 0;
}

#endif
