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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITyoE

static void yoESink(int data)
{
    /* a a a a a a */
    printIntLine(100 / data);
}

void FmvZhXubJGXZMsqcKeoD_yoE()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a */
    data = 0;
    yoESink(data);
}

#endif /* a */

#ifndef OMITLdX

/* a a a a a a a */
static void LdXG2BSink(int data)
{
    /* a a a a a a */
    printIntLine(100 / data);
}

static void LdXG2B()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a a a */
    data = 7;
    LdXG2BSink(data);
}

/* a a a a a a a */
static void LdXB2GSink(int data)
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

static void LdXB2G()
{
    int data;
    /* a a */
    data = -1;
    /* a a a a a a */
    data = 0;
    LdXB2GSink(data);
}

void FmvZhXubJGXZMsqcKeoD_LdX()
{
    LdXB2G();
    LdXG2B();
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
#ifndef OMITLdX
    printLine("Calling LdX()...");
    FmvZhXubJGXZMsqcKeoD_LdX();
    printLine("Finished LdX()");
#endif /* a */
#ifndef OMITyoE
    printLine("Calling yoE()...");
    FmvZhXubJGXZMsqcKeoD_yoE();
    printLine("Finished yoE()");
#endif /* a */
    return 0;
}

#endif
