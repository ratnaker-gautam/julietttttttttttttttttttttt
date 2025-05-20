/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITijK

void FyeFKWojredYmXTiOqfK_ijK()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = (unsigned int)RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            /* a a a a a a a a */
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITRmS

/* a a a a a a a a a a a a a */
static void RmSB2G1()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = (unsigned int)RAND32();
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        if (data > 0)
        {
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void RmSB2G2()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = (unsigned int)RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        if (data > 0)
        {
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a */
static void RmSG2B1()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            /* a a a a a a a a */
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void RmSG2B2()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            /* a a a a a a a a */
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}

void FyeFKWojredYmXTiOqfK_RmS()
{
    RmSB2G1();
    RmSB2G2();
    RmSG2B1();
    RmSG2B2();
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
#ifndef OMITRmS
    printLine("Calling RmS()...");
    FyeFKWojredYmXTiOqfK_RmS();
    printLine("Finished RmS()");
#endif /* a */
#ifndef OMITijK
    printLine("Calling ijK()...");
    FyeFKWojredYmXTiOqfK_ijK();
    printLine("Finished ijK()");
#endif /* a */
    return 0;
}

#endif
