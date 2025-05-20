/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITUkj

void uDENpzYbeIPnrRGkAKHm_Ukj()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%c", &data);
    }
    if(staticTrue)
    {
        {
            /* a a a a a a a a */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITKRn

/* a a a a a a a a a a a a a */
static void KRnB2G1()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%c", &data);
    }
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        if (data > CHAR_MIN)
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void KRnB2G2()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%c", &data);
    }
    if(staticTrue)
    {
        /* a a a a a a a a a a */
        if (data > CHAR_MIN)
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a */
static void KRnG2B1()
{
    char data;
    data = ' ';
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(staticTrue)
    {
        {
            /* a a a a a a a a */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void KRnG2B2()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(staticTrue)
    {
        {
            /* a a a a a a a a */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}

void uDENpzYbeIPnrRGkAKHm_KRn()
{
    KRnB2G1();
    KRnB2G2();
    KRnG2B1();
    KRnG2B2();
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
#ifndef OMITKRn
    printLine("Calling KRn()...");
    uDENpzYbeIPnrRGkAKHm_KRn();
    printLine("Finished KRn()");
#endif /* a */
#ifndef OMITUkj
    printLine("Calling Ukj()...");
    uDENpzYbeIPnrRGkAKHm_Ukj();
    printLine("Finished Ukj()");
#endif /* a */
    return 0;
}

#endif
