/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace nfedsTYfoYumaNDbUuIv
{

#ifndef OMITPHO

static void PHOSource(FILE * &data)
{
    /* a a a a a a a a a a a a a a a a a */
    data = freopen("PHOSource_freopen.txt","w+",stdin);
}

void PHO()
{
    FILE * data;
    /* a a */
    data = NULL;
    PHOSource(data);
    if (data != NULL)
    {
        /* a a a a a a a a a a a */
        _close((int)data);
    }
}

#endif /* a */

#ifndef OMITElh

/* a a a a a a a */
static void ElhB2GSource(FILE * &data)
{
    /* a a a a a a a a a a a a a a a a a */
    data = freopen("PHOSource_freopen.txt","w+",stdin);
}

static void ElhB2G()
{
    FILE * data;
    /* a a */
    data = NULL;
    ElhB2GSource(data);
    if (data != NULL)
    {
        /* a a a a a a */
        fclose(data);
    }
}

void Elh()
{
    ElhB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace nfedsTYfoYumaNDbUuIv; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITElh
    printLine("Calling Elh()...");
    Elh();
    printLine("Finished Elh()");
#endif /* a */
#ifndef OMITPHO
    printLine("Calling PHO()...");
    PHO();
    printLine("Finished PHO()");
#endif /* a */
    return 0;
}

#endif
