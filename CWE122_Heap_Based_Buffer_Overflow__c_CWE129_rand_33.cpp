/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a
 *    a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace GYTCkQPXqzNJxcBWjPps
{

#ifndef OMITbug

void bug()
{
    int data;
    int &dataRef = data;
    /* a a */
    data = -1;
    /* a a a a a a a a */
    data = RAND32();
    {
        int data = dataRef;
        {
            int i;
            int * buffer = (int *)malloc(10 * sizeof(int));
            if (buffer == NULL) {exit(-1);}
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
            free(buffer);
        }
    }
}

#endif /* a */

#ifndef OMITAYg

/* a a a a a a a */
static void AYgG2B()
{
    int data;
    int &dataRef = data;
    /* a a */
    data = -1;
    /* a a a a a a a a a a a a a a a
    * a a a a a a a a a a a a */
    data = 7;
    {
        int data = dataRef;
        {
            int i;
            int * buffer = (int *)malloc(10 * sizeof(int));
            if (buffer == NULL) {exit(-1);}
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
            free(buffer);
        }
    }
}

/* a a a a a a a */
static void AYgB2G()
{
    int data;
    int &dataRef = data;
    /* a a */
    data = -1;
    /* a a a a a a a a */
    data = RAND32();
    {
        int data = dataRef;
        {
            int i;
            int * buffer = (int *)malloc(10 * sizeof(int));
            if (buffer == NULL) {exit(-1);}
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
            free(buffer);
        }
    }
}

void AYg()
{
    AYgG2B();
    AYgB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace GYTCkQPXqzNJxcBWjPps; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITAYg
    printLine("Calling AYg()...");
    AYg();
    printLine("Finished AYg()");
#endif /* a */
#ifndef OMITbug
    printLine("Calling bug()...");
    bug();
    printLine("Finished bug()");
#endif /* a */
    return 0;
}

#endif
