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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace oVZCEVOUinRsAkhrOLJW
{

#ifndef OMITkkQ

/* a a a a a a a a a a a a a a */
static int kkQStatic = 0;

static void kkQSink(list<int>  data)
{
    if(kkQStatic)
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

void kkQ()
{
    list<int>  data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    kkQStatic = 1; /* a */
    kkQSink(data);
}

#endif /* a */

#ifndef OMITyWn

/* a a a a a a a a a a a a a a */
static int yWnB2G1Static = 0;
static int yWnB2G2Static = 0;
static int yWnG2bStatic = 0;

/* a a a a a a a a a a a a a a a a */
static void yWnB2G1Sink(list<int>  data)
{
    if(yWnB2G1Static)
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

static void yWnB2G1()
{
    list<int>  data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    yWnB2G1Static = 0; /* a */
    yWnB2G1Sink(data);
}

/* a a a a a a a a a a a a a a a a a */
static void yWnB2G2Sink(list<int>  data)
{
    if(yWnB2G2Static)
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

static void yWnB2G2()
{
    list<int>  data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    yWnB2G2Static = 1; /* a */
    yWnB2G2Sink(data);
}

/* a a a a a a */
static void yWnG2BSink(list<int>  data)
{
    if(yWnG2bStatic)
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

static void yWnG2B()
{
    list<int>  data;
    /* a a a a a a a */
    data.push_back(100);
    data.push_back(200);
    yWnG2bStatic = 1; /* a */
    yWnG2BSink(data);
}

void yWn()
{
    yWnB2G1();
    yWnB2G2();
    yWnG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace oVZCEVOUinRsAkhrOLJW; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITyWn
    printLine("Calling yWn()...");
    yWn();
    printLine("Finished yWn()");
#endif /* a */
#ifndef OMITkkQ
    printLine("Calling kkQ()...");
    kkQ();
    printLine("Finished kkQ()");
#endif /* a */
    return 0;
}

#endif
