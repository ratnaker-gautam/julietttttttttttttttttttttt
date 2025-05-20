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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

static char * helperNUG(char * aString)
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

static char * helperYyb(char * aString)
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

#ifndef OMITNUG

void zYHXqYtscDVYKYoTloHf_NUG()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            /* a a a a a */
            char * reversedString = helperNUG("NUGSink");
            printLine(reversedString);
            /* a
             * a a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a a a a a a
             */
        }
    }
}

#endif /* a */

#ifndef OMITYyb

/* a a a a a a a a */
static void Yyb1()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            /* a a a a a */
            char * reversedString = helperYyb("YybSink");
            printLine(reversedString);
            /* a
             * a a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a a a a a a
             */
        }
    }
}

void zYHXqYtscDVYKYoTloHf_Yyb()
{
    Yyb1();
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
#ifndef OMITYyb
    printLine("Calling Yyb()...");
    zYHXqYtscDVYKYoTloHf_Yyb();
    printLine("Finished Yyb()");
#endif /* a */
#ifndef OMITNUG
    printLine("Calling NUG()...");
    zYHXqYtscDVYKYoTloHf_NUG();
    printLine("Finished NUG()");
#endif /* a */
    return 0;
}

#endif
