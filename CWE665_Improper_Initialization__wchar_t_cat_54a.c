/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a
 * a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITkoa

/* a a a */
void sGThKKUZOLFfMLsLNpFi__wchar_t_cat_54b_koaSink(wchar_t * data);

void sGThKKUZOLFfMLsLNpFi__wchar_t_cat_54_koa()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* a a a a a */
    ; /* a a a a a a a */
    sGThKKUZOLFfMLsLNpFi__wchar_t_cat_54b_koaSink(data);
}

#endif /* a */

#ifndef OMITSRL

/* a a a */
void sGThKKUZOLFfMLsLNpFi__wchar_t_cat_54b_SRLG2BSink(wchar_t * data);

/* a a a a a a a */
static void SRLG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* a a a a */
    data[0] = L'\0'; /* a a */
    sGThKKUZOLFfMLsLNpFi__wchar_t_cat_54b_SRLG2BSink(data);
}

void sGThKKUZOLFfMLsLNpFi__wchar_t_cat_54_SRL()
{
    SRLG2B();
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
#ifndef OMITSRL
    printLine("Calling SRL()...");
    sGThKKUZOLFfMLsLNpFi__wchar_t_cat_54_SRL();
    printLine("Finished SRL()");
#endif /* a */
#ifndef OMITkoa
    printLine("Calling koa()...");
    sGThKKUZOLFfMLsLNpFi__wchar_t_cat_54_koa();
    printLine("Finished koa()");
#endif /* a */
    return 0;
}

#endif
