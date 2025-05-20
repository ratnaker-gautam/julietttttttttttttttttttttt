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

#ifndef OMITXjC

void infqddRJcGGDayJwheDB_XjC()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    while(1)
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
        break;
    }
    while(1)
    {
        /* a a a a a a a a a a */
        printStructLine(&data[0]);
        /* a a a a a a a a a a a a */
        break;
    }
}

#endif /* a */

#ifndef OMITAhU

/* a a a a a a a a a a a a a a a */
static void AhUB2G()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    while(1)
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
        break;
    }
    while(1)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
        break;
    }
}

/* a a a a a a a a a a a a a a a */
static void AhUG2B()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    while(1)
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
        break;
    }
    while(1)
    {
        /* a a a a a a a a a a */
        printStructLine(&data[0]);
        /* a a a a a a a a a a a a */
        break;
    }
}

void infqddRJcGGDayJwheDB_AhU()
{
    AhUB2G();
    AhUG2B();
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
#ifndef OMITAhU
    printLine("Calling AhU()...");
    infqddRJcGGDayJwheDB_AhU();
    printLine("Finished AhU()");
#endif /* a */
#ifndef OMITXjC
    printLine("Calling XjC()...");
    infqddRJcGGDayJwheDB_XjC();
    printLine("Finished XjC()");
#endif /* a */
    return 0;
}

#endif
