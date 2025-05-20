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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITYPM

void iWpakhHdMYBbnDUgxbxb_YPM()
{
    int i,j;
    twoIntsStruct * data;
    data = (twoIntsStruct *)malloc(10*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    for(i = 0; i < 1; i++)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    for(j = 0; j < 1; j++)
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

#ifndef OMITmZX

/* a a a a a a a a a a */
static void mZXB2G()
{
    int i,k;
    twoIntsStruct * data;
    data = (twoIntsStruct *)malloc(10*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    for(i = 0; i < 1; i++)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    for(k = 0; k < 1; k++)
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

/* a a a a a a a a a a */
static void mZXG2B()
{
    int h,j;
    twoIntsStruct * data;
    data = (twoIntsStruct *)malloc(10*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    for(h = 0; h < 1; h++)
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
    for(j = 0; j < 1; j++)
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

void iWpakhHdMYBbnDUgxbxb_mZX()
{
    mZXB2G();
    mZXG2B();
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
#ifndef OMITmZX
    printLine("Calling mZX()...");
    iWpakhHdMYBbnDUgxbxb_mZX();
    printLine("Finished mZX()");
#endif /* a */
#ifndef OMITYPM
    printLine("Calling YPM()...");
    iWpakhHdMYBbnDUgxbxb_YPM();
    printLine("Finished YPM()");
#endif /* a */
    return 0;
}

#endif
