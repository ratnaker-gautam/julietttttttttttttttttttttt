/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a
 *    a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITGee

/* a a a a a a a a a a a a a a */
int PuNyOcyJqGiIajxIDfsu_int_loop_22_GeeGlobal = 0;

int * PuNyOcyJqGiIajxIDfsu_int_loop_22_GeeSource(int * data);

void PuNyOcyJqGiIajxIDfsu_int_loop_22_Gee()
{
    int * data;
    data = NULL;
    PuNyOcyJqGiIajxIDfsu_int_loop_22_GeeGlobal = 1; /* a */
    data = PuNyOcyJqGiIajxIDfsu_int_loop_22_GeeSource(data);
    {
        int source[100] = {0}; /* a a a */
        {
            size_t i;
            /* a a a a a a a a a */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}

#endif /* a */

#ifndef OMITNhZ

/* a a a a a a a a a a a a a a */
int PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZG2B1Global = 0;
int PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZG2B2Global = 0;

/* a a a a a a a a a a a a a a a a */
int * PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZG2B1Source(int * data);

static void NhZG2B1()
{
    int * data;
    data = NULL;
    PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZG2B1Global = 0; /* a */
    data = PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZG2B1Source(data);
    {
        int source[100] = {0}; /* a a a */
        {
            size_t i;
            /* a a a a a a a a a */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}

/* a a a a a a a a a a a a a a a a a */
int * PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZG2B2Source(int * data);

static void NhZG2B2()
{
    int * data;
    data = NULL;
    PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZG2B2Global = 1; /* a */
    data = PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZG2B2Source(data);
    {
        int source[100] = {0}; /* a a a */
        {
            size_t i;
            /* a a a a a a a a a */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}

void PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZ()
{
    NhZG2B1();
    NhZG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITNhZ
    printLine("Calling NhZ()...");
    PuNyOcyJqGiIajxIDfsu_int_loop_22_NhZ();
    printLine("Finished NhZ()");
#endif /* a */
#ifndef OMITGee
    printLine("Calling Gee()...");
    PuNyOcyJqGiIajxIDfsu_int_loop_22_Gee();
    printLine("Finished Gee()");
#endif /* a */
    return 0;
}

#endif
