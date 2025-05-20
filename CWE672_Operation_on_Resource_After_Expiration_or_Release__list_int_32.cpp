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
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace ucaZbQhbjpOkicruhUSA
{

#ifndef OMITfGO

void fGO()
{
    list<int>  data;
    list<int>  *dataPtr1 = &data;
    list<int>  *dataPtr2 = &data;
    {
        list<int>  data = *dataPtr1;
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
        *dataPtr1 = data;
    }
    {
        list<int>  data = *dataPtr2;
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

#ifndef OMITjiI

/* a a a a a a a */
static void jiIG2B()
{
    list<int>  data;
    list<int>  *dataPtr1 = &data;
    list<int>  *dataPtr2 = &data;
    {
        list<int>  data = *dataPtr1;
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
        *dataPtr1 = data;
    }
    {
        list<int>  data = *dataPtr2;
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

/* a a a a a a a */
static void jiIB2G()
{
    list<int>  data;
    list<int>  *dataPtr1 = &data;
    list<int>  *dataPtr2 = &data;
    {
        list<int>  data = *dataPtr1;
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
        *dataPtr1 = data;
    }
    {
        list<int>  data = *dataPtr2;
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

void jiI()
{
    jiIG2B();
    jiIB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace ucaZbQhbjpOkicruhUSA; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITjiI
    printLine("Calling jiI()...");
    jiI();
    printLine("Finished jiI()");
#endif /* a */
#ifndef OMITfGO
    printLine("Calling fGO()...");
    fGO();
    printLine("Finished fGO()");
#endif /* a */
    return 0;
}

#endif
