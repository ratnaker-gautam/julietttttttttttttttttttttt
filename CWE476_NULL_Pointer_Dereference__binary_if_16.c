/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a a a a a a a a
 *    a a a a a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITvuS

void VOlKNavBQgVcJcHnnvdE_vuS()
{
    while(1)
    {
        {
            twoIntsStruct *twoIntsStructPointer = NULL;
            /* a a a a a a a a a a a a a a a a a a a
             * a a a a */
            if ((twoIntsStructPointer != NULL) & (twoIntsStructPointer->intOne == 5))
            {
                printLine("intOne == 5");
            }
        }
        break;
    }
}

#endif /* a */

#ifndef OMITPjM

/* a a a a a a a a */
static void PjM1()
{
    while(1)
    {
        {
            twoIntsStruct *twoIntsStructPointer = NULL;
            /* a a a a a a a a a a a a a a a a a a
             * a a a a a a a */
            if ((twoIntsStructPointer != NULL) && (twoIntsStructPointer->intOne == 5))
            {
                printLine("intOne == 5");
            }
        }
        break;
    }
}

void VOlKNavBQgVcJcHnnvdE_PjM()
{
    PjM1();
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
#ifndef OMITPjM
    printLine("Calling PjM()...");
    VOlKNavBQgVcJcHnnvdE_PjM();
    printLine("Finished PjM()");
#endif /* a */
#ifndef OMITvuS
    printLine("Calling vuS()...");
    VOlKNavBQgVcJcHnnvdE_vuS();
    printLine("Finished vuS()");
#endif /* a */
    return 0;
}

#endif
