/* #include <iostream>
//#include "Point4D.h"
#include "sv.h"
using namespace std;

main()
{
    // Point4D p(5, 6, 7, 8);
    // p.show();
    sv s1("22T_DT4", 2022, 1, 7, "TVL");
    s1.showLSH();
    s1.showHP();
    s1.showSV();

    s1.HP::show();
    s1.LSH::show();

    s1.show();
} */

#include <iostream>
//#include "svCNTT.h"
#include "MyClass.h"
using namespace std;

//main()
//{
    // sv s1("102", "TVL", true, 3.8);
    // svCNTT s2("103", "TVL1", true, 3.9, "chicken");
    // s1.show();
    // cout << endl;
    // s2.show();
    // sv *p1 = &s1;
    // svCNTT *p2 = &s2;
    // //downcast
    // p1 = &s2;
    // s2.show();
    // p1->show();
    // //upcast
    // p2 = static_cast<svCNTT*>(&s1);
    // p2->show();
    // //slicing
    // sv s3 = s2;
    // s3.show();

    /* sv s1("102", "NVA", true, 1.4);
    sv s11("102", "NVC", true, 2.4);
    svCNTT s2("103", "NVE", true, 2.4, "ga");
    svCNTT s22("103", "NVD", true, 3.5, "pro");
    cout << s1;
    cout << s2;
    cout << ((s1 == s11) ? "true" : "false") << endl;
    cout << ((s2 == s22) ? "true" : "false") << endl; */

    // MyClass m("Hi");
    // m.MC();
    // m.A();
    // m.B();
//} 

//downcast: su dung 1 con tro o lop cha tro den lop con
//su khac nhau giua da nang hoa ham bang ham toan cuc hoac ham tv trong ke thua, da hinh

/* template<typename T>
void HV(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

main()
{
    int x = 1, y = 2;
    double x1 = 1.1, y1 = 2.2;
    HV(x, y);
    cout << x << ", " << y << endl;
} */
 

#include "vector.cpp"
#include <iostream>
using namespace std;
main()
{
    vector<int> v1(3);
    v1.show();
}