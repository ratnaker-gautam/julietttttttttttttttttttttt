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

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITeFa

void jfFJbcjyQzxcNOjFCVcs_eFa()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("eFaSource_fopen.txt", "w+");
    if(staticFive==5)
    {
        if (data != NULL)
        {
            /* a a a a a a a a a a a */
            _close((int)data);
        }
    }
}

#endif /* a */

#ifndef OMITryW

/* a a a a a a a a a a a */
static void ryWB2G1()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("eFaSource_fopen.txt", "w+");
    if(staticFive!=5)
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
static void ryWB2G2()
{
    FILE * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a a a a a a a a a */
    data = fopen("eFaSource_fopen.txt", "w+");
    if(staticFive==5)
    {
        if (data != NULL)
        {
            /* a a a a a a */
            fclose(data);
        }
    }
}

void jfFJbcjyQzxcNOjFCVcs_ryW()
{
    ryWB2G1();
    ryWB2G2();
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
#ifndef OMITryW
    printLine("Calling ryW()...");
    jfFJbcjyQzxcNOjFCVcs_ryW();
    printLine("Finished ryW()");
#endif /* a */
#ifndef OMITeFa
    printLine("Calling eFa()...");
    jfFJbcjyQzxcNOjFCVcs_eFa();
    printLine("Finished eFa()");
#endif /* a */
    return 0;
}

#endif
