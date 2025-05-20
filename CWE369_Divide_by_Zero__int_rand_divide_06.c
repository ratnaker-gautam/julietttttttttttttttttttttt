/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a a a a
 * a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITRdn

void VBwRpuCfrcbWYpQcQsuM_Rdn()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a */
        printIntLine(100 / data);
    }
}

#endif /* a */

#ifndef OMITIId

/* a a a a a a a a a a a a a */
static void IIdB2G1()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
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
}

/* a a a a a a a a a a a a a a */
static void IIdB2G2()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(STATIC_CONST_FIVE==5)
    {
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
}

/* a a a a a a a a a a a a a */
static void IIdG2B1()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a */
        data = 7;
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a */
        printIntLine(100 / data);
    }
}

/* a a a a a a a a a a a a a a */
static void IIdG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a */
        data = 7;
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a */
        printIntLine(100 / data);
    }
}

void VBwRpuCfrcbWYpQcQsuM_IId()
{
    IIdB2G1();
    IIdB2G2();
    IIdG2B1();
    IIdG2B2();
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
#ifndef OMITIId
    printLine("Calling IId()...");
    VBwRpuCfrcbWYpQcQsuM_IId();
    printLine("Finished IId()");
#endif /* a */
#ifndef OMITRdn
    printLine("Calling Rdn()...");
    VBwRpuCfrcbWYpQcQsuM_Rdn();
    printLine("Finished Rdn()");
#endif /* a */
    return 0;
}

#endif
