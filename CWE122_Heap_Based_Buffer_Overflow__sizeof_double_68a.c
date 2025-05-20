/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a
 * a a a a a a a a a a a
 * a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

double * RkiWxzrhWRGpJRwSbLSi_double_68_EezData;
double * RkiWxzrhWRGpJRwSbLSi_double_68_hRPG2BData;

#ifndef OMITEez

/* a a a */
void RkiWxzrhWRGpJRwSbLSi_double_68b_EezSink();

void RkiWxzrhWRGpJRwSbLSi_double_68_Eez()
{
    double * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a a */
    /* a a a a a a a a a a a a */
    data = (double *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    RkiWxzrhWRGpJRwSbLSi_double_68_EezData = data;
    RkiWxzrhWRGpJRwSbLSi_double_68b_EezSink();
}

#endif /* a */

#ifndef OMIThRP

/* a a a */
void RkiWxzrhWRGpJRwSbLSi_double_68b_hRPG2BSink();

/* a a a a a a a */
static void hRPG2B()
{
    double * data;
    /* a a */
    data = NULL;
    /* a a a a a a a a */
    data = (double *)malloc(sizeof(*data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    RkiWxzrhWRGpJRwSbLSi_double_68_hRPG2BData = data;
    RkiWxzrhWRGpJRwSbLSi_double_68b_hRPG2BSink();
}

void RkiWxzrhWRGpJRwSbLSi_double_68_hRP()
{
    hRPG2B();
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
#ifndef OMIThRP
    printLine("Calling hRP()...");
    RkiWxzrhWRGpJRwSbLSi_double_68_hRP();
    printLine("Finished hRP()");
#endif /* a */
#ifndef OMITEez
    printLine("Calling Eez()...");
    RkiWxzrhWRGpJRwSbLSi_double_68_Eez();
    printLine("Finished Eez()");
#endif /* a */
    return 0;
}

#endif
