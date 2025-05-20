/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a a a a
 * a a a a a a a a a
 * a
 *    a a a
 *    a a a a a a
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace LTaiVrTdiVXtrkVohfRR
{

#ifndef OMITfZX

void fZX()
{
    int * data;
    /* a a */
    data = NULL;
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    /* a a a a a a a a a a a a a a a */
    delete [] data;
    /* a a a a a a a a a a */
    printIntLine(data[0]);
    /* a a a a a a a a a a a a */
}

#endif /* a */

#ifndef OMITlKi

/* a a a a a a a */
static void lKiG2B()
{
    int * data;
    /* a a */
    data = NULL;
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    /* a a a a a a a a */
    /* a a a a a a a a a a */
    printIntLine(data[0]);
    /* a a a a a a a a a a a a */
}

/* a a a a a a a */
static void lKiB2G()
{
    int * data;
    /* a a */
    data = NULL;
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    /* a a a a a a a a a a a a a a a */
    delete [] data;
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    /* a a */
    ; /* a a a a a a a */
}

void lKi()
{
    lKiG2B();
    lKiB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace LTaiVrTdiVXtrkVohfRR; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITlKi
    printLine("Calling lKi()...");
    lKi();
    printLine("Finished lKi()");
#endif /* a */
#ifndef OMITfZX
    printLine("Calling fZX()...");
    fZX();
    printLine("Finished fZX()");
#endif /* a */
    return 0;
}

#endif
