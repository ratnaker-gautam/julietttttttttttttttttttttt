/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a
 *    a a a a a a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITHim

void MAEvvJXfoWLCovDWjZBX_Him()
{
    int data;
    /* a a */
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    else
    {
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        data = 7;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a */
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
    else
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a */
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}

#endif /* a */

#ifndef OMITpqe

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void pqeB2G()
{
    int data;
    /* a a */
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    else
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a */
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
    else
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a */
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void pqeG2B()
{
    int data;
    /* a a */
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        data = 7;
    }
    else
    {
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        data = 7;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a */
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
    else
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a */
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}

void MAEvvJXfoWLCovDWjZBX_pqe()
{
    pqeB2G();
    pqeG2B();
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
#ifndef OMITpqe
    printLine("Calling pqe()...");
    MAEvvJXfoWLCovDWjZBX_pqe();
    printLine("Finished pqe()");
#endif /* a */
#ifndef OMITHim
    printLine("Calling Him()...");
    MAEvvJXfoWLCovDWjZBX_Him();
    printLine("Finished Him()");
#endif /* a */
    return 0;
}

#endif
