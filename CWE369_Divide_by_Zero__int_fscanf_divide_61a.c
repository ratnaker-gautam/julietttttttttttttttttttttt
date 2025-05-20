/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a
 * a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITpBk

/* a a a */
int hzPIicPTquRoHwogVPnX_fscanf_divide_61b_pBkSource(int data);

void hzPIicPTquRoHwogVPnX_fscanf_divide_61_pBk()
{
    int data;
    /* a a */
    data = -1;
    data = hzPIicPTquRoHwogVPnX_fscanf_divide_61b_pBkSource(data);
    /* a a a a a a */
    printIntLine(100 / data);
}

#endif /* a */

#ifndef OMITpXp

/* a a a a a a a */
int hzPIicPTquRoHwogVPnX_fscanf_divide_61b_pXpG2BSource(int data);

static void pXpG2B()
{
    int data;
    /* a a */
    data = -1;
    data = hzPIicPTquRoHwogVPnX_fscanf_divide_61b_pXpG2BSource(data);
    /* a a a a a a */
    printIntLine(100 / data);
}

/* a a a a a a a */
int hzPIicPTquRoHwogVPnX_fscanf_divide_61b_pXpB2GSource(int data);

static void pXpB2G()
{
    int data;
    /* a a */
    data = -1;
    data = hzPIicPTquRoHwogVPnX_fscanf_divide_61b_pXpB2GSource(data);
    /* a a a a a a */
    if( data != 0 )
    {
        printIntLine(100 / data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}

void hzPIicPTquRoHwogVPnX_fscanf_divide_61_pXp()
{
    pXpG2B();
    pXpB2G();
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
#ifndef OMITpXp
    printLine("Calling pXp()...");
    hzPIicPTquRoHwogVPnX_fscanf_divide_61_pXp();
    printLine("Finished pXp()");
#endif /* a */
#ifndef OMITpBk
    printLine("Calling pBk()...");
    hzPIicPTquRoHwogVPnX_fscanf_divide_61_pBk();
    printLine("Finished pBk()");
#endif /* a */
    return 0;
}

#endif
