#include <bits/stdc++.h>
using namespace std;

/* //compile error
typedef int P;
main()
{
    int x = 1, y = 2;
    P* px, py;
    px = &x;
    py = &y;
    cout << *px << *py;
}
 */

/* //kq = 16
#define square(x) ((x)*(x))
main()
{
    int x;
    cout << square(x + 4);
} */

/* //chi doc den khi nao gap ki tu 't' hoac qua 100 ki tu
main()
{
    char a[100];
    cin.getline(a, 100, 't');
    cout << a;
} */

/* //su dung toan tu , de tinh toan nhung chi luu giu gia tri cuoi cung cua z la 3
main()
{
    int x = 1, y = 2, z = 3;
    int t = (x, y, z);
    cout << t;
} */

/*
main()
{
    int x;
    cin >> x + 4;  //compile error
    cout << x; 
} */

/* //truy cap den gia tri cua x thong qua y, ma y = exam
namespace exam
{
    int x = 9;
    int y = 1;
}
namespace y = exam;
main()
{
    cout << y::x;
} */

/* //kq = 1120
main()
{
    int a[] = {10, 20, 30};
    cout << *a + 1;
    cout << *(a + 1);
} */

/* //kq = 12
typedef int* P;
main()
{
    int x = 1, y = 2;
    P px, py;
    px = &x;
    py = &y;
    cout << *px << *py;
} */

/* //kq = 22
int func1(int x = 1)
{
    int y = x;
    return y;
}

int func2(int x = 1)
{
    int y = x;
    return y + 1;
}

main()
{
    int x = 1;
    cout << func1(func2(x)) << func2(func1());
} */

/* //kq = 55
namespace exam
{
    int v1 = 10;
}

namespace exam
{
    int v2 = 15;
}

main()
{
    exam::v1 = exam::v2 = 5;
    cout << exam::v1 << exam::v2;
} */

/* main()
{
    cout << setprecision(17);
    double x = 0.1;
    cout << x;
} */

/* //kq = N
main()
{
    char a[] = {"CNTT"};
    char *ptr = a;
    ptr++;
    cout << *ptr;
} */

/* //kq = 12344
main()
{
    int i = 0, x = 0;
    for(int i = 1; i < 10; i *= 2)
    {
        x++;
        cout << x;
    }
    cout << x;
} */

/* void fun(int& x, int y = 200)
{
    int z = x + y;
    x += z;
    if(y != 200)    cout << z << x << y;
}

main()
{
    int x = 50, y = 20;
    cout << x << y;
    fun(x, y);
    cout << x << y;
} */

/* const int fun(int x = 1)
{
    int x = 1;
    return x++;
}

main()
{
    int x = 1;
    int y = fun(x);
    int z = fun()++;    //compile error
    cout << y << z;
} */

/* //kq = 2, can xem lai cau nay
main()
{
    enum exam
    {
        exam1 = 1,
        exam2,
        exam3
    };
    int vx = exam3; cout << vx << endl;
    int& rx = vx;   cout << rx << endl;
    int& ry = vx;   cout << ry << endl;
    rx = exam2;     cout << rx << endl;
    cout << ry << ry-- << ry++;
} */

/* void fun(int& x)
{
    cout << x;
}

main()
{
    float x = 1.23; //compile error
    fun(x);
    cout << x;
} */

/* void fun(int x, int y = 10)
{
    cout << x << y;
}

main()
{
    fun(1);
    fun(3,4);
} */

/* main()
{
    string x = "ITF";
    string y = "DUT";
    string z = x + " " + y;
    cout << z;
} */

/* //gia tri rac
main()
{
    int a[] = {4, 5, 6, 7};
    int *ptr = (a + 1);
    cout << a;
} */

/* main()
{
    int x = 5, y = 5, z;
    x = ++x; cout << x << endl;
    y = --y;    cout << y << endl;
    z = ++x + --y;
    cout << z;
} */

/* main()
{
    vector<int> myvt(5);
    int* p = myvt.data();
    *p = 10;
    ++p;
    *p = 20;
    p[2] = 100;
    for(unsigned i = 0; i < myvt.size(); i++)
    {
        cout << ' ' << myvt[i];
    }
} */

/* //compile error
main()
{
    const int x;
    cout << x;
} */

/* //kq = 11
void func(int x)
{
    cout << x++;
}

main()
{
    int x = 1;
    const int y = 1;
    func(x);
    func(y);
} */

/* //kq = 23
int fun1(int x = 1)
{
    static int y = x;
    return y++;
}

int fun2(int x = 1)
{
    static int y = x;
    return ++y;
}

main()
{
    int x = 1;
    cout << fun1(fun2(x)) << fun2(fun1(x));
} */

/* //kq = 8
main()
{
    int x = 8;
    cout << x && false;
} */

/* //compile error
main()
{
    int x = 10;
    void *px = &x;
    int *py = px;
    cout << *py;
} */


/* main()
{
    char a[20];
    int i;
    for(i = 0; i < 10; i++)
        *(a + i) = 65 + i;
    *(a + i) = '\0';
    cout << a;
} */

/* //kq = 8
main()
{
    int x = 8;
    cout << x && true;
} */

/* main()
{
    int a[] = {1, 2, 3, 4};
    int* ptr = a;
    for(int i = 0; i < 4; i++) a[i] = ptr[i];
    for(int i = 0; i < 4; i++) cout << *(ptr + i);
} */

/* string fun()
{
    string x = "5";
 //   cin >> x;
    return x;
}

main()
{
    string x = "6";
    x = fun();
    cout << x;
} */

/* main()
 {
    int x = 3;
    int *px;
    int **py;
    px = &x;
    py = &px;
    cout << py << " " << *py << " " << **py;
} */

/* //kq = 215
void fun(int x, int y, int& z)
{
    x = y + z;
    y = x + z;
    z = x + y;
}

main()
{
    int x = 2, y = 3;
    fun(x, y, y);
    cout << x << y;
} */

/* int fun(int x, int y)
{
    return (x > y ? x : y);
}

main()
{
    int x = 5;
    int y = 7;
    cout << fun(x, y);
} */

/* main()
{
    int a[] = {4, 5, 6, 7};
    int *ptr = (a + 1);
    cout << *ptr;
} */

/* 
//kq = 30
int& fun()
{
    static int x = 10;
    return x;
}

main()
{
    cout << (fun() = 30);
} */

/* main()
{
    char* ptr;
    char a[] = "CNTTDUT";
    ptr = a;
    ptr += 5;
    cout << ptr;
} */

/* //chuong trinh chay binh thuong
main()
{
    int *ptr = NULL;
    delete ptr;
} */

/* main()
{
    int x = 100;
    double y = 3.14;
    cout << x << " " << y << " " << x*y;
    endl(cout);
} */

/* //compile error vi phai khai bao doi so binh thuong truoc doi so mac dinh
int fun(int x = 10, int y)
{
    return x + y;
}

main()
{
    cout << fun(5);
} */

/* main()
{
    int cout = 1;
    cout << cout;
} */

/* main()
{
    int x;
    char y;
    cin >> x;
    y = x;
    cout << x << " " << y;
}
 */

/* main()
{
    const int a = 1;
    int b = 2;
    const int &x = a; x++;
    const int &y = b; y++;
    const int &z = 3; z++;
    cout << x << y << z;
} */

/* void display(const int &m)
{
    cout << m + 1; //m + 1 duoc nhung m++ thi khong duoc
}

main()
{
    int x = 1;
    display(x);
} */

/* void show(int x, int y = 1, int z = 2);

main()
{
    show(1);
}

void show(int x, int y = 1, int z = 2) //khong duoc khai bao tham so mac dinh o dinh nghia ham khi da khai bao nguyen mau ham
{
    cout << x << y << z;
}
 */

/* int x;
int &fun()
{
    x = 5;
    return x;
}

main()
{
    int *p = &fun();
    cout << *p << *p;
} */

/* //kq = DUT
main()
{
    const char* ptr = new char[4];
    ptr = "DUT";
    cout << ptr;
} */


/* main()
{
    bool x = true;
    x--;    //compile error
    cout << x;
} */

/* //kq = 261116
main()
{
    int x = 10, y = 15;
    int z = ++x + y++;
    cout << z << x << y;
}
 */

/* //DUT
main()
{
    char a[5] = "DUT";
    cout << a[3] << a;
} */

/* main()
{
    int x = 1, &y = x;
    x++;
    cout << y;
} */

/* //9
namespace exam
{
    int x = 9;
    int y = 1;
}

namespace y = exam;

main()
{
    cout << y::x;
} */


/* //6 
main()
{
    int x = 5;
    int* const ptr = &x;
    (*ptr)++;
    cout << *ptr;
} */

/* //kq = -1 1
main()
{
    int x = 3;
    cout << x / -2 << " " << x % -2;
} */

/* //DUTCNTT
void swap(char **x, char **y)
{
    char *tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

main()
{
    const char *ptr[2] = {"CNTT", "DUT"};
    swap(ptr[0], ptr[1]);
    cout << ptr[0] << ptr[1];
} */

/* //-3
main()
{
    cout << -1 - 1 - 1;
} */

/* main()
{
    int x = 5, &y = x;
    cout << &x << " " << &y;
} */

/* //A
main()
{
    string str("A");
    cout << str;
}
 */


/* int fun(int x, int y)
{
    cout << x;
    cout << y;
}

main()
{
    int(*ptr)(char, int);
    ptr = fun;  //compile error
    fun(2, 3);
    ptr(2, 3);
} */

/* //01/01/2018
void fun(int thang, int ngay, int nam)
{
    cout << setfill('0');
    cout << setw(2) << thang << '/'
        << setw(2) << ngay << '/'
        << setw(4) << nam << endl;
}

main()
{
    fun(1, 1, 2018);
} */


/* main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    static char a[3] = "1234";  //compile error
    cout << a;
}
 */

/* //UT
main()
{
    char* ptr;
    char a[] = "CNTTDUT";
    ptr = a;
    ptr += 5;
    cout << ptr;
} */

/* main()
{
    int x = 9;
    while(x > 0) x--;
    cout << x;
} */

/* //22
main()
{
    int x = 1;
    const int& y = x;
    x++;
    cout << x << y;
} */

/* main()
{
    double a[] = {5.0, 6.0, 7.0, 8.0};
    double *ptr = (a + 2);
    cout << *ptr << a << *(a + 3) << *a << *a + 9;
} */

/* //32
double fun(double x, double y, double z)
{
    int m = 1;
    double n = 1;
    n = n * (1 + x * ++y * z);
    m = int(m + n);
    return m;
}

main()
{
    double x;
    double fun(double x = 5.0, double y = 2, double z = 2.0);
    x = fun();
    cout << x;
} */

/* //CNTT
main()
{
    int x = 5;
    if(x++ == 5) cout << "CNTT";
    else   
        if(++x == 6) cout << "DUT";

} */

/* //-6 -6
main()
{
    int x, y;
    int z = -8;
    int t = 3;
    x = --z + t;
    y = z-- + t;
    cout << x << y;
}
 */

/* main()
{
    int& x = 5; //compile error
    cout << x;

} */

/* //he bat phan
main()
{
    unsigned long x = 64;
    cout << x << oct << " " << x;
} */

/* main()
{
    int x = 135;
    cout << "CNTT" << (x >> 2) << "DUT";
} */

/* int a[100];
void swap(int x, int y)
{
    int tmp = a[x];
    a[x] = a[y];
    a[y] = tmp;
    return;
}

void show(int x)
{
    for(int i = 0; i < x; i++) cout << a[i];
    return;
}

void fun(int x, int y)
{
    if(x == 0) show(y);
    else
    {
        for(int i = x - 1; i >= 0; i--)
        {
            swap(i, x - 1);
            fun(x - 1, y);
            swap(i, x - 1);
        }
    }
    return;
}

main()
{
    fun(3, 3);
}
 */

/* //2222
main()
{
    int a[] = {1, 2, 3, 4};
    int& x = a[0];
    for(int i = 0; i < 4; i++) a[i] += a[i];
    for(int i = 0; i < 4; i++) cout << x;
} */

/* //55 + compile error
int &fun(int x = 2)
{
    return x;
}

main()
{
    int *ptr = &fun(5);
    cout << *ptr;
    cout << *ptr;
} */

/* //-11
main()
{
    int x = 3;
    cout << x / -2 << x % -2;
} */
/* 
main()
{
    enum exam
    {
        JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, DEP, OCT, NOV, DEC
    };
    for(int i = MAR; i <= NOV; i++) cout << i;
} */
/* 
int x = 1;
main()
{
    int x = 2;
    {
        int x = x + 1;
        cout << x << ::x;
    }
    cout << x;
} */

/* main()
{
    int x = 10;
    && x = 40; //loi
    int* ptr = &(x + 1); //loi
} */

/* //compile
main()
{
    int x = 5, y = 10, z = 15;
    int a[3] = {&x, &y, &z};
    cout << *a[*a[1] - 8];
} */

/* main()
{
    int x = 0, y = 2;
    int &z = y;
    int *ptr = &z;
    *ptr = &z;  //sai
    z = *ptr;
} */

/* main()
{
    char a[] = {"CNTT"};
    char *ptr = a;
    ptr++;
    cout << *ptr;
} */

/* //kq = 2
main()
{
    enum exam
    {
        exam1 = 1,
        exam2,
        exam3
    };
    int x = exam3;
    int& z = x;
    int& t = x; 
    z = exam2;
    cout << t--;
} */

/* main()
{
    int a[] = {4, 5, 6, 7};
    int *ptr = (a + 1);
    cout << a;
} */

/* //2345
main()
{
    int a[] = {1, 2, 3, 4};
    int* ptr = a;
    for(int i = 0; i < 4; i++) a[i] += a[i];
    for(int i = 0; i < 4; i++) cout << *(ptr + i) -i;
} */

/* //1011 dap an khac
main()
{
    int a[] = {0, 5, 10, 15};
    int* ptr = a + 2;
    int x = (*ptr)++;
    cout << x << *ptr;
} */

/* //311 dap an khac
main()
{
    int x = 5, y = 3, z = 2;
    x = y++;
    y = --z;
    cout << x << y << z;
} */

/* //deu in ra dia chi cua x
main()
{
    int x = 5;
    int *ptr;
    ptr = &x;
    cout << *&ptr << " " << &*ptr << " " << &x;
} */

/* //1111
main()
{
    int x = 10;
    int const& z = x;
    x = 11;
    cout << x << z;
} */

/* //11
int &fun()
{
    static int x = 1;
    return x;
}

main()
{
    cout << fun();
    cout << fun()++;
} */

/* //compile
int sum(int x, int y, int z)
{
    return x + y;
}

double sum(double x, double y, double z)
{
    return x + y;
}

main()
{
    cout << sum(5, 6);
    cout << sum(5.5, 6.6);
    system("pause");
} */

/* //5
namespace exama
{
    int x = 10;
}

namespace examb
{
    int x = 5;
}

main()
{
    using namespace examb;
    cout << x;
} */

/* //compile
main()
{
    int x = 10;
    if(x < 10)
        for(int i = 0; i < 10; i++)
            cout << i;
    else    cout << i;
} */

/* //compile
main()
{
    const int x;
    x = 1;
    cout << x;
} */

/* //IT
main()
{
    for(int x = 1; x > 3; x++)  cout << x;
    cout << "IT";
} */


/* //56 dong ngoac la lay cai cuoi cung con khong dong thi lay cai dau tien
main()
{
    int x = 5, y = 6, z, t;
    z = x, y;
    t = (x, y);
    cout << z << t;
} */

/* //compile
main()
{
    const int x;
    cout << x;
} */

/* //0
int fun()
{
    int x = 0;
    return x++;
}

main()
{
    cout << fun();
} */

/* main()
{
    const char* ptr = new char[4];
    ptr = "DUT";
    cout << *(ptr + 2);
} */

/* //64 and another answer
main()
{
    int x = 320;
    char *ptr;
    ptr = (char*)&x;
    cout << int(*ptr);
} */

/* //8 vi tro den bien sau cung duoc gan
main()
{
    int x = 5, y = 8;
    const int* ptr;
    ptr = &x;
    ptr = &y;
    --x;
    cout << *ptr;
} */

/* struct exam
{
    int x, y, z;
};

main()
{
    cout << sizeof(exam);
} */

/* //3010
int x = 10;
main()
{
    int x = 20;
    {
        int x = 30;
        cout << x << ::x;
    }
} */

/* //8
static int fun(int x, int y)
{
    return (x % y == 0) ? x / y + 2 : x - fun(y, x + 1);
}

main()
{
    cout << fun(7, 3);
} */

/* //compile
main()
{
    cout << (int x = 5) << (int y = 6);
} */

/* main()
{
    int x, y;
    int* ptr = &x;
    x = 200;
    y = 200;
    *ptr = 100;
    y = *ptr;
    cout << *ptr << y;
} */

/* //compile
main()
{
    int x = 5;
    int* ptr = &x;
    int& z = x;
    cout << *ptr << " " << *z;
} */

/* main()
{
    void x = 10, y =10;

} */

/* //1
void fun(int x, int y)
{
    x = 2;
    y = 1;
}

main()
{
    int x = 1;
    fun(x, x);
    cout << x;
} */

/* //another
main()
{
    int x;
    char y;
    void *ptr;
    x = 2;
    y = 'd';
    ptr = &x;
    cout << ptr << endl;
    ptr = &y;
    cout << ptr;
} */

/* main()
{
    char a[100];
    cin.getline(a, 100, 't');
    cout << a;
} */

/* //DUT
main()
{
    (0) ? cout << "CNTT" : cout << "DUT";
} */

/* main()
{
    int x = 1;
    switch(x)
    {
        case 1: cout << "one";
        case 2: cout << "two";
        case 3: cout << "three";
        default: cout << "default";
    }
} */

/* //x > y
main()
{
    int x = -1;
    unsigned int y = 2;
    (x > y) ? cout << "x>y" : cout << "x<y";
} */


/* main()
{
    int x = 2, &z = x;
    cout << ++x << z--;
} */

/* #define min(x, y) ((x < y) ? x : y)

main()
{
    double x = 100.1, y = 100.01;
    cout << min(x, y);
} */

/* main()
{
    int x = 3;
    int *ptr = &x;
    *++ptr = 2;
    cout << x << *ptr;
} */