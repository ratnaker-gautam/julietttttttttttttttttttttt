/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITyfu

void SOQOkgjplDxypvHpnURO_yfu()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(staticReturnsTrue())
    {
        /* a a a a a */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

#endif /* a */

#ifndef OMITRIj

/* a a a a a a a a a a a a a */
static void RIjB2G1()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(staticReturnsTrue())
    {
        /* a a a a a */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void RIjB2G2()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(staticReturnsTrue())
    {
        /* a a a a a */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void RIjG2B1()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void RIjG2B2()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(staticReturnsTrue())
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

void SOQOkgjplDxypvHpnURO_RIj()
{
    RIjB2G1();
    RIjB2G2();
    RIjG2B1();
    RIjG2B2();
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
#ifndef OMITRIj
    printLine("Calling RIj()...");
    SOQOkgjplDxypvHpnURO_RIj();
    printLine("Finished RIj()");
#endif /* a */
#ifndef OMITyfu
    printLine("Calling yfu()...");
    SOQOkgjplDxypvHpnURO_yfu();
    printLine("Finished yfu()");
#endif /* a */
    return 0;
}

#endif
