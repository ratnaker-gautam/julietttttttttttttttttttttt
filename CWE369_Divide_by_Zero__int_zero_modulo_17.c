/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a
 * a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITHXE

void QCKMjhCnRCCnCrkOeIvt_HXE()
{
    int i,j;
    int data;
    /* a a */
    data = -1;
    for(i = 0; i < 1; i++)
    {
        /* a a a a a a */
        data = 0;
    }
    for(j = 0; j < 1; j++)
    {
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

#endif /* a */

#ifndef OMITSdh

/* a a a a a a a a a a */
static void SdhB2G()
{
    int i,k;
    int data;
    /* a a */
    data = -1;
    for(i = 0; i < 1; i++)
    {
        /* a a a a a a */
        data = 0;
    }
    for(k = 0; k < 1; k++)
    {
        /* a a a a a a */
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}

/* a a a a a a a a a a */
static void SdhG2B()
{
    int h,j;
    int data;
    /* a a */
    data = -1;
    for(h = 0; h < 1; h++)
    {
        /* a a a a a a a a */
        data = 7;
    }
    for(j = 0; j < 1; j++)
    {
        /* a a a a a a */
        printIntLine(100 % data);
    }
}

void QCKMjhCnRCCnCrkOeIvt_Sdh()
{
    SdhB2G();
    SdhG2B();
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
#ifndef OMITSdh
    printLine("Calling Sdh()...");
    QCKMjhCnRCCnCrkOeIvt_Sdh();
    printLine("Finished Sdh()");
#endif /* a */
#ifndef OMITHXE
    printLine("Calling HXE()...");
    QCKMjhCnRCCnCrkOeIvt_HXE();
    printLine("Finished HXE()");
#endif /* a */
    return 0;
}

#endif
