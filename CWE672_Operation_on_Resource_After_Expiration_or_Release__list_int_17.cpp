/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a a a
 * a  a a a a a a a a a
 * a a a a a a a a a a
 * a
 *    a a a a a a a a a a a
 *    a a a a a a a a a a a a a a a
 * a a a a a a a
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace oCVuEiKgZfhoMrQnCjqe
{

#ifndef OMITjLC

void jLC()
{
    int i,j;
    list<int>  data;
    for(i = 0; i < 1; i++)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    for(j = 0; j < 1; j++)
    {
        {
            list<int> ::iterator i;
            cout << "The list contains: ";
            for( i = data.begin(); i != data.end(); i++)
            {
                if (!*i)
                {
                    data.clear();
                }
                /* a a a a a a a a a a a a a */
                cout << " " << *i;
            }
            cout << endl;
        }
    }
}

#endif /* a */

#ifndef OMITkSU

/* a a a a a a a a a a */
static void kSUB2G()
{
    int i,k;
    list<int>  data;
    for(i = 0; i < 1; i++)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    for(k = 0; k < 1; k++)
    {
        {
            list<int> ::iterator i;
            cout << "The list contains: ";
            for( i = data.begin(); i != data.end(); i++)
            {
                /* a a a a a a a a a a */
                cout << " " << *i;
            }
            cout << endl;
        }
    }
}

/* a a a a a a a a a a */
static void kSUG2B()
{
    int h,j;
    list<int>  data;
    for(h = 0; h < 1; h++)
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
    }
    for(j = 0; j < 1; j++)
    {
        {
            list<int> ::iterator i;
            cout << "The list contains: ";
            for( i = data.begin(); i != data.end(); i++)
            {
                if (!*i)
                {
                    data.clear();
                }
                /* a a a a a a a a a a a a a */
                cout << " " << *i;
            }
            cout << endl;
        }
    }
}

void kSU()
{
    kSUB2G();
    kSUG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace oCVuEiKgZfhoMrQnCjqe; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITkSU
    printLine("Calling kSU()...");
    kSU();
    printLine("Finished kSU()");
#endif /* a */
#ifndef OMITjLC
    printLine("Calling jLC()...");
    jLC();
    printLine("Finished jLC()");
#endif /* a */
    return 0;
}

#endif
