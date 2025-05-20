/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITJuk

void DizClqqEHfkYgeJKHjQj_Juk()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(staticTrue)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(staticTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

#endif /* a */

#ifndef OMITxkL

/* a a a a a a a a a a a a a */
static void xkLB2G1()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(staticTrue)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void xkLB2G2()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(staticTrue)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(staticTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void xkLG2B1()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
    }
    if(staticTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void xkLG2B2()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(staticTrue)
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
    }
    if(staticTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}

void DizClqqEHfkYgeJKHjQj_xkL()
{
    xkLB2G1();
    xkLB2G2();
    xkLG2B1();
    xkLG2B2();
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
#ifndef OMITxkL
    printLine("Calling xkL()...");
    DizClqqEHfkYgeJKHjQj_xkL();
    printLine("Finished xkL()");
#endif /* a */
#ifndef OMITJuk
    printLine("Calling Juk()...");
    DizClqqEHfkYgeJKHjQj_Juk();
    printLine("Finished Juk()");
#endif /* a */
    return 0;
}

#endif
