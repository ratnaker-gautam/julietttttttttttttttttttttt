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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

namespace pSecKzKGlLbnJOhdtdmb
{

#ifndef OMITSiG

void SiG()
{
    list<int>  data;
    if(staticTrue)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(staticTrue)
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

#ifndef OMITmgD

/* a a a a a a a a a a a a a */
static void mgDB2G1()
{
    list<int>  data;
    if(staticTrue)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
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

/* a a a a a a a a a a a a a a */
static void mgDB2G2()
{
    list<int>  data;
    if(staticTrue)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(staticTrue)
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

/* a a a a a a a a a a a a a */
static void mgDG2B1()
{
    list<int>  data;
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
    }
    if(staticTrue)
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

/* a a a a a a a a a a a a a a */
static void mgDG2B2()
{
    list<int>  data;
    if(staticTrue)
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
    }
    if(staticTrue)
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

void mgD()
{
    mgDB2G1();
    mgDB2G2();
    mgDG2B1();
    mgDG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace pSecKzKGlLbnJOhdtdmb; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITmgD
    printLine("Calling mgD()...");
    mgD();
    printLine("Finished mgD()");
#endif /* a */
#ifndef OMITSiG
    printLine("Calling SiG()...");
    SiG();
    printLine("Finished SiG()");
#endif /* a */
    return 0;
}

#endif
