/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITGjq

/* a a a */
int64_t qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61b_GjqSource(int64_t data);

void qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61_Gjq()
{
    int64_t data;
    data = 0LL;
    data = qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61b_GjqSource(data);
    {
        /* a a a a a a a a */
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
}

#endif /* a */

#ifndef OMITTdf

/* a a a a a a a */
int64_t qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61b_TdfG2BSource(int64_t data);

static void TdfG2B()
{
    int64_t data;
    data = 0LL;
    data = qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61b_TdfG2BSource(data);
    {
        /* a a a a a a a a */
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
}

/* a a a a a a a */
int64_t qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61b_TdfB2GSource(int64_t data);

static void TdfB2G()
{
    int64_t data;
    data = 0LL;
    data = qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61b_TdfB2GSource(data);
    /* a a a a a a a a a a */
    if (data > LLONG_MIN)
    {
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

void qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61_Tdf()
{
    TdfG2B();
    TdfB2G();
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
#ifndef OMITTdf
    printLine("Calling Tdf()...");
    qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61_Tdf();
    printLine("Finished Tdf()");
#endif /* a */
#ifndef OMITGjq
    printLine("Calling Gjq()...");
    qYVUKYikOONnxZzKrkIx__int64_t_rand_postdec_61_Gjq();
    printLine("Finished Gjq()");
#endif /* a */
    return 0;
}

#endif
