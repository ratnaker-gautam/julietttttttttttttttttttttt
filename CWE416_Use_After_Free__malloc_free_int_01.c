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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITIKG

void IHvSIeIycVaWuwdwHgXt_IKG()
{
    int * data;
    /* a a */
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    /* a a a a a a a a a a a a a a a */
    free(data);
    /* a a a a a a a a a a */
    printIntLine(data[0]);
    /* a a a a a a a a a a a a */
}

#endif /* a */

#ifndef OMITKIN

/* a a a a a a a */
static void KING2B()
{
    int * data;
    /* a a */
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    /* a a a a a a a a */
    /* a a a a a a a a a a */
    printIntLine(data[0]);
    /* a a a a a a a a a a a a */
}

/* a a a a a a a */
static void KINB2G()
{
    int * data;
    /* a a */
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    /* a a a a a a a a a a a a a a a */
    free(data);
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    /* a a */
    ; /* a a a a a a a */
}

void IHvSIeIycVaWuwdwHgXt_KIN()
{
    KING2B();
    KINB2G();
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
#ifndef OMITKIN
    printLine("Calling KIN()...");
    IHvSIeIycVaWuwdwHgXt_KIN();
    printLine("Finished KIN()");
#endif /* a */
#ifndef OMITIKG
    printLine("Calling IKG()...");
    IHvSIeIycVaWuwdwHgXt_IKG();
    printLine("Finished IKG()");
#endif /* a */
    return 0;
}

#endif
