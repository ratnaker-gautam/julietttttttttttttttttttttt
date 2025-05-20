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
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITfeP

void rVaAGJMPBiJGkFyCKcgf_feP()
{
    char data;
    data = ' ';
    if(1)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%c", &data);
    }
    if(1)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITtEU

/* a a a a a a a a a a a a a */
static void tEUB2G1()
{
    char data;
    data = ' ';
    if(1)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%c", &data);
    }
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (CHAR_MIN/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void tEUB2G2()
{
    char data;
    data = ' ';
    if(1)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%c", &data);
    }
    if(1)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (CHAR_MIN/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void tEUG2B1()
{
    char data;
    data = ' ';
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(1)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void tEUG2B2()
{
    char data;
    data = ' ';
    if(1)
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(1)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}

void rVaAGJMPBiJGkFyCKcgf_tEU()
{
    tEUB2G1();
    tEUB2G2();
    tEUG2B1();
    tEUG2B2();
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
#ifndef OMITtEU
    printLine("Calling tEU()...");
    rVaAGJMPBiJGkFyCKcgf_tEU();
    printLine("Finished tEU()");
#endif /* a */
#ifndef OMITfeP
    printLine("Calling feP()...");
    rVaAGJMPBiJGkFyCKcgf_feP();
    printLine("Finished feP()");
#endif /* a */
    return 0;
}

#endif
