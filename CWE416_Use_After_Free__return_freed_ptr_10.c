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

static char * helperGDk(char * aString)
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

static char * helpergWh(char * aString)
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

#ifndef OMITGDk

void quVdADnFWLUhXIvuKLRJ_GDk()
{
    if(globalTrue)
    {
        {
            /* a a a a a */
            char * reversedString = helperGDk("GDkSink");
            printLine(reversedString);
            /* a
             * a a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a a a a a a
             */
        }
    }
}

#endif /* a */

#ifndef OMITgWh

/* a a a a a a */
static void gWh1()
{
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a */
            char * reversedString = helpergWh("gWhSink");
            printLine(reversedString);
            /* a
             * a a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a a a a a a
             */
        }
    }
}

/* a a a a a a a a */
static void gWh2()
{
    if(globalTrue)
    {
        {
            /* a a a a a */
            char * reversedString = helpergWh("gWhSink");
            printLine(reversedString);
            /* a
             * a a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a a a a a a a
             */
        }
    }
}

void quVdADnFWLUhXIvuKLRJ_gWh()
{
    gWh1();
    gWh2();
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
#ifndef OMITgWh
    printLine("Calling gWh()...");
    quVdADnFWLUhXIvuKLRJ_gWh();
    printLine("Finished gWh()");
#endif /* a */
#ifndef OMITGDk
    printLine("Calling GDk()...");
    quVdADnFWLUhXIvuKLRJ_GDk();
    printLine("Finished GDk()");
#endif /* a */
    return 0;
}

#endif
