/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a
 *    a a a a a a a a a a
 *    a a a a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

static char * helperxpt(char * aString)
{
    size_t i = 0;
    size_t j;
    char * reversedString = NULL;
    if (aString != NULL)
    {
        i = strlen(aString);
        reversedString = (char *) malloc(i+1);
        if (reversedString == NULL) {exit(-1);}
        for (j = 0; j < i; j++)
        {
            reversedString[j] = aString[i-j-1];
        }
        reversedString[i] = '\0';
        /* a a a a a a a a a a a a a a */
        free(reversedString);
        return reversedString;
    }
    else
    {
        return NULL;
    }
}

static char * helperLHC(char * aString)
{
    size_t i = 0;
    size_t j;
    char * reversedString = NULL;
    if (aString != NULL)
    {
        i = strlen(aString);
        reversedString = (char *) malloc(i+1);
        if (reversedString == NULL) {exit(-1);}
        for (j = 0; j < i; j++)
        {
            reversedString[j] = aString[i-j-1];
        }
        reversedString[i] = '\0';
        /* a a a a a a a a */
        return reversedString;
    }
    else
    {
        return NULL;
    }
}

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITxpt

void UaCkaPKFdIGqSXuSonIh_xpt()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* a a a a a */
            char * reversedString = helperxpt("xptSink");
            printLine(reversedString);
            /* a
             * a a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a a a a a a
             */
        }
    }
}

#endif /* a */

#ifndef OMITLHC

/* a a a a a a */
static void LHC1()
{
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a */
            char * reversedString = helperLHC("LHCSink");
            printLine(reversedString);
            /* a
             * a a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a a a a a a
             */
        }
    }
}

/* a a a a a a a a */
static void LHC2()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* a a a a a */
            char * reversedString = helperLHC("LHCSink");
            printLine(reversedString);
            /* a
             * a a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a a a a a a
             */
        }
    }
}

void UaCkaPKFdIGqSXuSonIh_LHC()
{
    LHC1();
    LHC2();
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
#ifndef OMITLHC
    printLine("Calling LHC()...");
    UaCkaPKFdIGqSXuSonIh_LHC();
    printLine("Finished LHC()");
#endif /* a */
#ifndef OMITxpt
    printLine("Calling xpt()...");
    UaCkaPKFdIGqSXuSonIh_xpt();
    printLine("Finished xpt()");
#endif /* a */
    return 0;
}

#endif
