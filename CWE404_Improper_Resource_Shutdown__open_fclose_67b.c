/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a  a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define OPEN _open
#define CLOSE _close
#else
#include <unistd.h>
#define OPEN open
#define CLOSE close
#endif

typedef struct _rQAHsKStXjiOYRqNAAWA_fclose_67_structType
{
    int structFirst;
} rQAHsKStXjiOYRqNAAWA_fclose_67_structType;

#ifndef OMITzhW

void yWZFxpZzIAUfuOVClxPe_zhWSink(rQAHsKStXjiOYRqNAAWA_fclose_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data != -1)
    {
        /* a a a a a a a a a a a */
        fclose((FILE *)data);
    }
}

#endif /* a */

#ifndef OMITfPh

/* a a a a a a a */
void yWZFxpZzIAUfuOVClxPe_fPhB2GSink(rQAHsKStXjiOYRqNAAWA_fclose_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data != -1)
    {
        /* a a a a a a */
        CLOSE(data);
    }
}

#endif /* a */
