/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITFEv

void unPsBhxLyWYAZrDCdfQt_FEv()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = (char)RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a*a a a a a a */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITnRd

/* a a a a a a a a a a a a a */
static void nRdB2G1()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = (char)RAND32();
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data < (CHAR_MAX/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void nRdB2G2()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = (char)RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data < (CHAR_MAX/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void nRdG2B1()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a*a a a a a a */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void nRdG2B2()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a*a a a a a a */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}

void unPsBhxLyWYAZrDCdfQt_nRd()
{
    nRdB2G1();
    nRdB2G2();
    nRdG2B1();
    nRdG2B2();
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
#ifndef OMITnRd
    printLine("Calling nRd()...");
    unPsBhxLyWYAZrDCdfQt_nRd();
    printLine("Finished nRd()");
#endif /* a */
#ifndef OMITFEv
    printLine("Calling FEv()...");
    unPsBhxLyWYAZrDCdfQt_FEv();
    printLine("Finished FEv()");
#endif /* a */
    return 0;
}

#endif
