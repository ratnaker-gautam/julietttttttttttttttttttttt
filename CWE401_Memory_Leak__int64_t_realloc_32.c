/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a
 * a a a a a a
 * a
 *    a a a a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMIToig

void WUEqVxPbaafJaqylJYpr_oig()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        /* a a a a a a a */
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        data[0] = 5LL;
        printLongLongLine(data[0]);
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        /* a a a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITeiU

/* a a a a a a a */
static void eiUG2B()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        /* a a a a a a a a a */
        data = (int64_t *)ALLOCA(100*sizeof(int64_t));
        /* a a a a a a */
        data[0] = 5LL;
        printLongLongLine(data[0]);
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        /* a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a */
static void eiUB2G()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        /* a a a a a a a */
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* a a a a a a */
        data[0] = 5LL;
        printLongLongLine(data[0]);
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        /* a a a */
        free(data);
    }
}

void WUEqVxPbaafJaqylJYpr_eiU()
{
    eiUG2B();
    eiUB2G();
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
#ifndef OMITeiU
    printLine("Calling eiU()...");
    WUEqVxPbaafJaqylJYpr_eiU();
    printLine("Finished eiU()");
#endif /* a */
#ifndef OMIToig
    printLine("Calling oig()...");
    WUEqVxPbaafJaqylJYpr_oig();
    printLine("Finished oig()");
#endif /* a */
    return 0;
}

#endif
