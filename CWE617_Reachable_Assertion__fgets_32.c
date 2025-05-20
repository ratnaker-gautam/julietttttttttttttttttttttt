/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a
 * a
 *    a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

#define ASSERT_VALUE 5

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

#ifndef OMITGto

void PttTxmDnKrhXbtAAhItc_Gto()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    /* a a */
    data = -1;
    {
        int data = *dataPtr1;
        {
            char inputBuffer[CHAR_ARRAY_SIZE] = "";
            /* a a a a a a a a a */
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                /* a a a */
                data = atoi(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
        }
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        /* a a a a a a a a a a */
        assert(data > ASSERT_VALUE);
    }
}

#endif /* a */

#ifndef OMITRFA

/* a a a a a a a */
static void RFAG2B()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    /* a a */
    data = -1;
    {
        int data = *dataPtr1;
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        /* a a a a a a a a a a */
        assert(data > ASSERT_VALUE);
    }
}

void PttTxmDnKrhXbtAAhItc_RFA()
{
    RFAG2B();
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
#ifndef OMITRFA
    printLine("Calling RFA()...");
    PttTxmDnKrhXbtAAhItc_RFA();
    printLine("Finished RFA()");
#endif /* a */
#ifndef OMITGto
    printLine("Calling Gto()...");
    PttTxmDnKrhXbtAAhItc_Gto();
    printLine("Finished Gto()");
#endif /* a */
    return 0;
}

#endif
