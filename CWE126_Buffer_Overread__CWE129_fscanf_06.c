/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a
 *    a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITKTq

void srZzZnqxVdekUetEzhlS_KTq()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a */
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}

#endif /* a */

#ifndef OMITBtB

/* a a a a a a a a a a a a a */
static void BtBB2G1()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
    }
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a */
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void BtBB2G2()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a */
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void BtBG2B1()
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
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        data = 7;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a */
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void BtBG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        data = 7;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int buffer[10] = { 0 };
            /* a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a */
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}

void srZzZnqxVdekUetEzhlS_BtB()
{
    BtBB2G1();
    BtBB2G2();
    BtBG2B1();
    BtBG2B2();
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
#ifndef OMITBtB
    printLine("Calling BtB()...");
    srZzZnqxVdekUetEzhlS_BtB();
    printLine("Finished BtB()");
#endif /* a */
#ifndef OMITKTq
    printLine("Calling KTq()...");
    srZzZnqxVdekUetEzhlS_KTq();
    printLine("Finished KTq()");
#endif /* a */
    return 0;
}

#endif
