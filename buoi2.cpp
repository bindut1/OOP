#include <bits/stdc++.h>
using namespace std;

// void show(int x, int y = 1, int z = 2)
// {
//     cout << x << y << z;
// }
/* int x = 4;
int &fun()
{
    return x;
}

main()
{
    cout << x;
    cout << fun();
    fun() = 8;
    cout << x;
} */

/* int x = 4;
int &fun()
{
    static int x = 5;
    return x;
}

main()
{
    cout << x;
    cout << fun();
    fun() = 8;
    cout << x;
} 
 */
/* main()
{
    // hang tham chieu
    int x = 2;
    const int y = 3;

    const int &z1 = y;
//    z1 = 10;
    cout << y << " " << z1 << endl;

    const int &z2 = x;
    x = 3;
//    z2 = 10;
    cout << x << " " << z2 << endl;

    const int &z3 = 3;
//    z3 = 10;
    cout << z3 << endl;

    // doi so mac dinh
    // show();
    // show(1);
    // show(1, 2);
    // show(1, 2, 3);
    // show(1, , 1);
} */

// ham hang khac ham ... ntn

/* main()
{
    int x = 1;
    cout << &x << endl;
    int *p = &x;
    cout << p << endl;
    cout << *p << " " << x << endl;
    cout << &p << endl;
} */

/* main()
{
    int x = 10, y = 20;
    int *p1, *p2;
    p1 = &x; p2 = &y;
    cout << x << " " << y << " " << *p1 << " " << *p2 << endl;
    *p1 = 50; *p2 = 90;
    cout << x << " " << y << " " << *p1 << " " << *p2 << endl;
    *p1 = *p2;
    cout << x << " " << y << " " << *p1 << " " << *p2 << endl;

} */
/* //con tro hang va hang con tro
main()
{
    int x = 1;
    int y = 2;
    const int* p1 = &x;
    cout << *p1 << endl;
    p1 = &y;
   // *p1 = 10;
    cout << *p1 << endl;

    int* const p2 = &x;
    *p2 = 9;
    cout << *p2 << endl;
  //  p2 = &y;
} */

/* void show(char *str)
{
    cout << str;
}

main()
{
    const char *str = "DUT";
    //show(str);
    show(const_cast<char*>(str));
} */

// trinh bien dich cua java ko cho phep tra ve bien cuc bo dong
/* int& a()
{
    int x = 4;
    return x;
}

main()
{
    int* p = &a();
    cout << *p << endl;
    cout << *p << " " << *p << endl;
} */

/* main()
{
    int a[4] = {2, 4, 6, 8};
    int *p = a;
    cout << p << " " << a << " " << &a[0] << endl;
    cout << (p+1) << " " << &a[1] << " " << &p[1] << endl;
    cout << *(p+1) << " " << a[1] << " " << p[1] << endl;
} */

/* main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;
    p += 2;
    cout << *p;
    p--;
    cout << *p;
    *p++;
    cout << *p;
} */

/* main()
{    int a[2][3] = {1, 2, 3, 4, 5, 6};
    cout << a << " " << &a[0][0] << endl;
    cout << *(a + 1) << " " << a[1] << &a[1][0] << endl;
    cout << *(a + 1) + 2 << " " << &a[1][2] << endl;
    cout << *(*(a + 1) + 2) << " " << a[1][2] << endl;

} */

main()
{
    int x = 2;
    int *p1, *p2;
    p1 = &x;
    cout << *p1;
    *p1 += 2;
    cout << x;
    *p2 = *p1;
    *p2 += 3;
    cout << *p2;
    cout << x;
} 

//p1 = p2: p2 tro den dau p1 tro den do
//*p1 = *p2: lay gia tri cua *p2 gan cho *p1