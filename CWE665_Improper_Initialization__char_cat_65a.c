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
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITLcj

/* a a a */
void ArTyMEIskEKMJbUkdzad__char_cat_65b_LcjSink(char * data);

void ArTyMEIskEKMJbUkdzad__char_cat_65_Lcj()
{
    char * data;
    /* a a a a */
    void (*funcPtr) (char *) = ArTyMEIskEKMJbUkdzad__char_cat_65b_LcjSink;
    char dataBuffer[100];
    data = dataBuffer;
    /* a a a a a */
    ; /* a a a a a a a */
    /* a a a a */
    funcPtr(data);
}

#endif /* a */

#ifndef OMITUlu

/* a a a a a a a */
void ArTyMEIskEKMJbUkdzad__char_cat_65b_UluG2BSink(char * data);

static void UluG2B()
{
    char * data;
    void (*funcPtr) (char *) = ArTyMEIskEKMJbUkdzad__char_cat_65b_UluG2BSink;
    char dataBuffer[100];
    data = dataBuffer;
    /* a a a a */
    data[0] = '\0'; /* a a */
    funcPtr(data);
}

void ArTyMEIskEKMJbUkdzad__char_cat_65_Ulu()
{
    UluG2B();
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
#ifndef OMITUlu
    printLine("Calling Ulu()...");
    ArTyMEIskEKMJbUkdzad__char_cat_65_Ulu();
    printLine("Finished Ulu()");
#endif /* a */
#ifndef OMITLcj
    printLine("Calling Lcj()...");
    ArTyMEIskEKMJbUkdzad__char_cat_65_Lcj();
    printLine("Finished Lcj()");
#endif /* a */
    return 0;
}

#endif
