/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a
 * a a a a a a
 * a
 *    a a a a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>

#define CHAR_ARRAY_SIZE 20

#ifndef OMITPbL

void oXnDPucWONwebgFjJMZn_PbL()
{
    float data;
    float *dataPtr1 = &data;
    float *dataPtr2 = &data;
    /* a a */
    data = 0.0F;
    {
        float data = *dataPtr1;
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            /* a a a a a a a a a a a */
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                /* a a a */
                data = (float)atof(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
        }
        *dataPtr1 = data;
    }
    {
        float data = *dataPtr2;
        {
            /* a a a a a a */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITYGq

/* a a a a a a a */
static void YGqG2B()
{
    float data;
    float *dataPtr1 = &data;
    float *dataPtr2 = &data;
    /* a a */
    data = 0.0F;
    {
        float data = *dataPtr1;
        /* a a a a a a a a a a a */
        data = 2.0F;
        *dataPtr1 = data;
    }
    {
        float data = *dataPtr2;
        {
            /* a a a a a a */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}

/* a a a a a a a */
static void YGqB2G()
{
    float data;
    float *dataPtr1 = &data;
    float *dataPtr2 = &data;
    /* a a */
    data = 0.0F;
    {
        float data = *dataPtr1;
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            /* a a a a a a a a a a a */
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                /* a a a */
                data = (float)atof(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
        }
        *dataPtr1 = data;
    }
    {
        float data = *dataPtr2;
        /* a a a a a a a a a a */
        if(fabs(data) > 0.000001)
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}

void oXnDPucWONwebgFjJMZn_YGq()
{
    YGqG2B();
    YGqB2G();
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
#ifndef OMITYGq
    printLine("Calling YGq()...");
    oXnDPucWONwebgFjJMZn_YGq();
    printLine("Finished YGq()");
#endif /* a */
#ifndef OMITPbL
    printLine("Calling PbL()...");
    oXnDPucWONwebgFjJMZn_PbL();
    printLine("Finished PbL()");
#endif /* a */
    return 0;
}

#endif
