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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITotJ

void JNevdbbKsMoHsUjpfwcy_otJ()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
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
    if(globalFive==5)
    {
        /* a a a a a a a a a a */
        printStructLine(&data[0]);
        /* a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITEov

/* a a a a a a a a a a a a a */
static void EovB2G1()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
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
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void EovB2G2()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
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
    if(globalFive==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void EovG2B1()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
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
    if(globalFive==5)
    {
        /* a a a a a a a a a a */
        printStructLine(&data[0]);
        /* a a a a a a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void EovG2B2()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
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
    if(globalFive==5)
    {
        /* a a a a a a a a a a */
        printStructLine(&data[0]);
        /* a a a a a a a a a a a a */
    }
}

void JNevdbbKsMoHsUjpfwcy_Eov()
{
    EovB2G1();
    EovB2G2();
    EovG2B1();
    EovG2B2();
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
#ifndef OMITEov
    printLine("Calling Eov()...");
    JNevdbbKsMoHsUjpfwcy_Eov();
    printLine("Finished Eov()");
#endif /* a */
#ifndef OMITotJ
    printLine("Calling otJ()...");
    JNevdbbKsMoHsUjpfwcy_otJ();
    printLine("Finished otJ()");
#endif /* a */
    return 0;
}

#endif
