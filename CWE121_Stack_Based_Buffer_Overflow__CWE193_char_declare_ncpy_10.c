/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a */
#define SRC_STRING "AAAAAAAAAA"

#ifndef OMITLUN

void CxFDUdNozZFsKJpOJskT_LUN()
{
    char * data;
    char dataLUNBuffer[10];
    char dataSgtBuffer[10+1];
    if(globalTrue)
    {
        /* a a a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = dataLUNBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
    }
}

#endif /* a */

#ifndef OMITSgt

/* a a a a a a a a a a a a */
static void SgtG2B1()
{
    char * data;
    char dataLUNBuffer[10];
    char dataSgtBuffer[10+1];
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = dataSgtBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void SgtG2B2()
{
    char * data;
    char dataLUNBuffer[10];
    char dataSgtBuffer[10+1];
    if(globalTrue)
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = dataSgtBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
    }
}

void CxFDUdNozZFsKJpOJskT_Sgt()
{
    SgtG2B1();
    SgtG2B2();
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
#ifndef OMITSgt
    printLine("Calling Sgt()...");
    CxFDUdNozZFsKJpOJskT_Sgt();
    printLine("Finished Sgt()");
#endif /* a */
#ifndef OMITLUN
    printLine("Calling LUN()...");
    CxFDUdNozZFsKJpOJskT_LUN();
    printLine("Finished LUN()");
#endif /* a */
    return 0;
}

#endif
