/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a a a a
 * a a a a a a a a a
 * a
 *    a a a
 *    a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITiTQ

void FjhEQqbWXaZaCqjfmXFu_iTQ()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    else
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* a a a a a a a a */
    }
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a */
        printStructLine(&data[0]);
        /* a a a a a a a a a a a a */
    }
    else
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITsXV

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void sXVB2G()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    else
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
    else
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void sXVG2B()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* a a a a a a a a */
    }
    else
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* a a a a a a a a */
    }
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a */
        printStructLine(&data[0]);
        /* a a a a a a a a a a a a */
    }
    else
    {
        /* a a a a a a a a a a */
        printStructLine(&data[0]);
        /* a a a a a a a a a a a a */
    }
}

void FjhEQqbWXaZaCqjfmXFu_sXV()
{
    sXVB2G();
    sXVG2B();
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
#ifndef OMITsXV
    printLine("Calling sXV()...");
    FjhEQqbWXaZaCqjfmXFu_sXV();
    printLine("Finished sXV()");
#endif /* a */
#ifndef OMITiTQ
    printLine("Calling iTQ()...");
    FjhEQqbWXaZaCqjfmXFu_iTQ();
    printLine("Finished iTQ()");
#endif /* a */
    return 0;
}

#endif
