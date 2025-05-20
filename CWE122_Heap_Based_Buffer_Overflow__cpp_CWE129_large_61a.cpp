/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a
 *    a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace PgsSSPAgwJXkXvMlWQpX_large_61
{

#ifndef OMITDPX

/* a a a */
int DPXSource(int data);

void DPX()
{
    int data;
    /* a a */
    data = -1;
    data = DPXSource(data);
    {
        int i;
        int * buffer = new int[10];
        /* a a */
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        /* a a a a a a a a a a a a a a a a a
        * a a a a a a a a a a a a */
        if (data >= 0)
        {
            buffer[data] = 1;
            /* a a a a */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
}

#endif /* a */

#ifndef OMITGgf

/* a a a a a a a */
int GgfG2BSource(int data);

static void GgfG2B()
{
    int data;
    /* a a */
    data = -1;
    data = GgfG2BSource(data);
    {
        int i;
        int * buffer = new int[10];
        /* a a */
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        /* a a a a a a a a a a a a a a a a a
        * a a a a a a a a a a a a */
        if (data >= 0)
        {
            buffer[data] = 1;
            /* a a a a */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
}

/* a a a a a a a */
int GgfB2GSource(int data);

static void GgfB2G()
{
    int data;
    /* a a */
    data = -1;
    data = GgfB2GSource(data);
    {
        int i;
        int * buffer = new int[10];
        /* a a */
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        /* a a a a a a a a a a a */
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            /* a a a a */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
        delete[] buffer;
    }
}

void Ggf()
{
    GgfG2B();
    GgfB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace PgsSSPAgwJXkXvMlWQpX_large_61; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITGgf
    printLine("Calling Ggf()...");
    Ggf();
    printLine("Finished Ggf()");
#endif /* a */
#ifndef OMITDPX
    printLine("Calling DPX()...");
    DPX();
    printLine("Finished DPX()");
#endif /* a */
    return 0;
}

#endif
