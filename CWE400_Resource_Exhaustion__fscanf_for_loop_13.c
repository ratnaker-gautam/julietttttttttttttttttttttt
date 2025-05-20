/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a a
 *    a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITswi

void fDiHQdWMDKGufDDQuiHV_swi()
{
    int count;
    /* a a */
    count = -1;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &count);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            size_t i = 0;
            /* a a a a a a a a a a a a a */
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}

#endif /* a */

#ifndef OMITlkW

/* a a a a a a a a a a a a a */
static void lkWB2G1()
{
    int count;
    /* a a */
    count = -1;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &count);
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            size_t i = 0;
            /* a a a a a a a a a a a */
            if (count > 0 && count <= 20)
            {
                for (i = 0; i < (size_t)count; i++)
                {
                    printLine("Hello");
                }
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void lkWB2G2()
{
    int count;
    /* a a */
    count = -1;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &count);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            size_t i = 0;
            /* a a a a a a a a a a a */
            if (count > 0 && count <= 20)
            {
                for (i = 0; i < (size_t)count; i++)
                {
                    printLine("Hello");
                }
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void lkWG2B1()
{
    int count;
    /* a a */
    count = -1;
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a */
        count = 20;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            size_t i = 0;
            /* a a a a a a a a a a a a a */
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void lkWG2B2()
{
    int count;
    /* a a */
    count = -1;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        count = 20;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            size_t i = 0;
            /* a a a a a a a a a a a a a */
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}

void fDiHQdWMDKGufDDQuiHV_lkW()
{
    lkWB2G1();
    lkWB2G2();
    lkWG2B1();
    lkWG2B2();
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
#ifndef OMITlkW
    printLine("Calling lkW()...");
    fDiHQdWMDKGufDDQuiHV_lkW();
    printLine("Finished lkW()");
#endif /* a */
#ifndef OMITswi
    printLine("Calling swi()...");
    fDiHQdWMDKGufDDQuiHV_swi();
    printLine("Finished swi()");
#endif /* a */
    return 0;
}

#endif
