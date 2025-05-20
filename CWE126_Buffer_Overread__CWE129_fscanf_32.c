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
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITmBJ

void hSEgLQZuUeWsIHCcfqNi_mBJ()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    /* a a */
    data = -1;
    {
        int data = *dataPtr1;
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
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

#ifndef OMITzKw

/* a a a a a a a */
static void zKwG2B()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    /* a a */
    data = -1;
    {
        int data = *dataPtr1;
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        data = 7;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
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

/* a a a a a a a */
static void zKwB2G()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    /* a a */
    data = -1;
    {
        int data = *dataPtr1;
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
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

void hSEgLQZuUeWsIHCcfqNi_zKw()
{
    zKwG2B();
    zKwB2G();
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
#ifndef OMITzKw
    printLine("Calling zKw()...");
    hSEgLQZuUeWsIHCcfqNi_zKw();
    printLine("Finished zKw()");
#endif /* a */
#ifndef OMITmBJ
    printLine("Calling mBJ()...");
    hSEgLQZuUeWsIHCcfqNi_mBJ();
    printLine("Finished mBJ()");
#endif /* a */
    return 0;
}

#endif
