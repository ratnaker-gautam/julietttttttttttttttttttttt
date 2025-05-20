/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITndu

void odhRjZFyabhylzYbneHT_ndu()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("nduSource_fopen.txt", "w+");
    if(globalFive==5)
    {
        if (data != NULL)
        {
            /* a a a a a a a a a a a */
            _close((int)data);
        }
    }
}

#endif /* a */

#ifndef OMITWCI

/* a a a a a a a a a a a */
static void WCIB2G1()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("nduSource_fopen.txt", "w+");
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            /* a a a a a a */
            fclose(data);
        }
    }
}

/* a a a a a a a a a a a  */
static void WCIB2G2()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("nduSource_fopen.txt", "w+");
    if(globalFive==5)
    {
        if (data != NULL)
        {
            /* a a a a a a */
            fclose(data);
        }
    }
}

void odhRjZFyabhylzYbneHT_WCI()
{
    WCIB2G1();
    WCIB2G2();
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
#ifndef OMITWCI
    printLine("Calling WCI()...");
    odhRjZFyabhylzYbneHT_WCI();
    printLine("Finished WCI()");
#endif /* a */
#ifndef OMITndu
    printLine("Calling ndu()...");
    odhRjZFyabhylzYbneHT_ndu();
    printLine("Finished ndu()");
#endif /* a */
    return 0;
}

#endif
