/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a
 * a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITFpc

#include "std_testcase.h"
#include "EPAkeudKTHfzOpwbqIzQ_char_memmove_82.h"

namespace EPAkeudKTHfzOpwbqIzQ_char_memmove_82
{

void XliwwiZlVOppbaGPKRiq::action(char * data)
{
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a
         * a a a a a a a a */
        memmove(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}

}
#endif /* a */
