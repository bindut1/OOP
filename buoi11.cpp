#include <iostream>
//#include "MyExp.h"
//#include "vector.h"
//#include "Trungian.cpp"
//#include "Point.h"
using namespace std;

// void chia(int& a, int &b)
// {
//     try
//     {
//         if(b == 0)
//             throw invalid_argument("hihuhe");
//         else
//             cout << a / b << endl;
//     }
//     catch(invalid_argument& e)
//     {
//         cout << e.what() << endl;
//         throw;
//     }
    // catch(Exp& e)
    // {
    //     cout << "chia - " << e << endl;
    //     throw;
    // }
//}

/* void TT(int& a, int& b)
{
    try
    {
        chia(a,b);
    }
    catch(MyExp& e)
    {
        cout << "tt - " << e << endl;
        throw;
    }
    catch(Exp& e)
    {
        cout << "tt - " << e << endl;
        throw;
    }
}
 */
/* main()
{
    // int a = 3, b = 0;
    // chia(a, b);
    vector<int, 3> v1;
    cout << v1;
//    vector<Point, 2> v2;
//    cout << v2;
} */

#include "Map.cpp"
#include "Klass.cpp"

main()
{
    /* Map<Key<int>, Value<string>> m1;
    cout m1;
    Map<Key<double>, Value<Point>> m1;
    cout << m2; */
    Map<int, string, Value> v1;
    cout << v1;
}