#include <iostream>
using namespace std;

/* //kq = 1218
struct Struct
{
    public:
        int add(int, int = 10);
        double add(int, double);
};

int Struct::add(int x, int y)
{
    return (x *= y + 2);
}

main()
{
    Struct obj;
    cout << obj.add(1) << obj.add(3, 4);
} */

/* //kq = 912
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

/* //compile error
class ex
{
    int ex();
};

int ex::ex()
{
    cout <<"ITF";
    return 0;
}

main()
{
    ex obbj;
    return 0;
} */

/* //kq = 64038
class base
{
    private:
        int x;
    public:
        base(int);
        ~base();
        void show();
};
base::base(int x)
{
    this->x = ++x;
}
base::~base()
{
    cout << this->x - 1;
}
void base::show()
{
    cout << --this->x + 1;
}
void func()
{
    base obj(5);
    obj.show();
    int *ptr = (int*)&obj;
    *ptr = 40;
    obj.show();
}
main()
{
    func();
} */

/* //kq = 46.5
double& func()
{
    double x = 46.50, &rx = x;
    return rx;
}
main()
{
    double x = func();
    cout << x;
}
 */
/* //kq = 252015105
class ex
{
    int *ptr;
    int size;
    public:
        ex(int);
        ~ex();
        int& operator[](const int&);
};
int& ex::operator[](const int& index)
{
    return *(this->ptr + index);
}
ex::ex(int size)
{
    this->ptr = new int[size];
    size = size;
}
ex::~ex()
{
    delete[] this->ptr;
}
main()
{
    ex obj(5);
    obj[0] = 25;
    obj[1] = 20;
    obj[2] = 15;
    obj[3] = 10;
    obj[4] = 5;
    for(int i = 0; i < 5; ++i) cout << obj[i];
} */

/* //-11
main()
{
    int x = 3;
    cout << x / -2 << x % -2;
} */

/* //kq = 123
class ex
{
    int var;
    static int count;
    public:
        ex();
        int getvar();
};

int ex::count = 1;
ex::ex()
{
    this->var = this->count++;
}

int ex::getvar()
{
    return this->var;
}

main()
{
    ex obj1, obj2, obj3;
    cout << obj1.getvar() << obj2.getvar() << obj3.getvar();
} */

/* //kq = 5
int func(int x, int y)
{
    int tmp;
    while(y != 0)
    {
        tmp = x % y;
        x = y;
        y = tmp;
    }
    return(x);
}
main()
{
    int x = 15, y = 25;
    cout << func(x, y);
} */

/* //kq = 20
class ex
{
    double prop;
    public:
        friend void func(ex&);
        void func(double);
        void setprop(double);
};
void ex::setprop(double prop)
{
    this->prop = prop;
}
void ex::func(double prop)
{
    prop *= 2;
}
void func(ex& obj)
{
    obj.func(obj.prop);
    obj.prop *= 2;
    cout << obj.prop;
}
main()
{
    ex obj;
    obj.setprop(10.0);
    func(obj);
} */

/* //kq = 6533
int ax[] = {1200, 200, 2300, 1230, 1543};
int ay[] = {12, 14, 16, 18, 20};
int i, x = 0;
main()
{
    for(int i = 0; i < 5; i++)
        x += ax[i];
    for(int i = 0; i < 4; i++)
        x += ay[i];
    cout << x;
} */

/* //compile
int func(int, int);
int func(int, int, int = 15);
main()
{
    cout << func(2, 4);
}

int func(int x, int y)
{
    return x * y;
}
int func(int x, int y, int z = 5)
{
    return x * y * z;
} */

/* //kq = 9
namespace ex
{
    int x;
}
void x()
{
    using namespace ex;
    int x;
    x = 9;
    cout << x;
}
main()
{
    enum ex
    {
        x, y
    };
    class x
    {
        ex y;
    };
    ::x();
} */

/* //kq = 213
class ex
{
    public:
        double l;
        double b;
        double h;
};
main()
{
    ex obj;
    obj.h = 5;
    obj.l = 6;
    obj.b = 7.1;
    double x = obj.h * obj.l * obj.b;
    cout << x;
} */

/* class base
{
    int x, y;
    public:
        base(int, int);
        void show();
};
base::base(int x, int y)
{
    this->x = x;
    this->y = y;
}
void base::show()
{
    cout << this->x << this->y;
}
main()
{
    int x = 1;
    int &y = x;
    base obj(y, x);
} */

/* 
//kq = compile
void swap(char **x, char **y)
{
    char *ptr;
    ptr = *x;
    *x = *y;
    *y = ptr;
}
main()
{
    const char *ptr[2] = {"CNTT", "DUT"};
    swap(ptr[0], ptr[1]);
    cout << ptr[0] << ptr[1];
} */

/* //kq = char
class base
{
    int x;
    public:
        base(short);
        base(int);
        base(char);
        ~base();
};
base::base(short x)
{
    cout << "short";
}
base::base(int x)
{
    cout << "int";
}
base::base(char x)
{
    cout << "char";
}
base::~base()
{
    cout << "final";
}
main()
{
    char x = 64;
    base *ptr = new base(x);
} */

/* //kq = 3,5
class complex
{
    double R, I;
    public:
        complex(double = 1.0, double = 2.0);
        complex operator+(complex &);
        friend ostream& operator<<(ostream &, complex);
};
complex::complex(double R, double I) : R(R)
{
    this->I = I;
}
complex complex::operator+(complex& obj)
{
    return complex(this->R + obj.R, this->I + obj.I);
}
ostream & operator<<(ostream &o, complex obj)
{
    o << obj.R << "," << obj.I;
    return o;
}

main()
{
    complex obj1(2.0, 3.0);
    complex obj2;
    complex obj3 = obj2;
    complex &obj4 = obj3;
    obj4 = obj1 + obj2;
    cout << obj4;
} */

/* //kq = 2
class baseA
{
    int x, y;
    public:
        baseA(int = 1, int = 1);
        void show();
};
baseA::baseA(int x, int y)
{
    this->x = x;
    this->y = y;
}
void baseA::show()
{
    cout << this->x * this->y;
}
class baseB
{
    baseA obj;
    public:
        baseB(int, int);
};
baseB::baseB(int x, int y) : obj(x, y)
{
    this->obj.show();
}
main()
{
    baseB obj(1, 2);
} */

/* //kq = 1122
class base
{
    public:
        int x;
};
main()
{
    base *ptr = new base();
    (*ptr).x = 1;
    cout << (*ptr).x << ptr->x;
    ptr->x = 2;
    cout << (*ptr).x << ptr->x;
} */

/* //compile
class complex
{
    int R;
    int I;
    public:
        complex();
        complex(int, int);
        ~complex();
        complex operator+(const complex&);
        void operator+(const complex&);
        friend ostream operator<<(ostream&, const complex&);
}; */

/* //kq = 1
class base
{
    static int cnt;
    public:
        static void setdata(int);
        static void show();
};
int base::cnt = 0;
void base::setdata(int cnt)
{
    base::cnt = cnt;
}
void base::show()
{
    cout << base::cnt;
}
main()
{
    base::setdata(1);
    base::show();
} */

/* //kq = 32
class Point
{
    int x, y;
    public:
        Point();
        Point& operator()(int, int);
        friend ostream& operator<<(ostream&, const Point&);
};
Point::Point() : x(0) , y(0)
{}

Point& Point::operator()(int x, int y)
{
    this->x = x;
    this->y = y;
    return *this;
}
ostream& operator<<(ostream& o, const Point& obj)
{
    o << obj.x << obj.y;
    return o;
}

main()
{
    Point obj;
    obj(3, 2);
    cout << obj;
} */

/* //compile
class baseA
{
    int x;
};
class baseB
{
    int x;
    baseA obj;
    public:
        operator baseA();
        operator int();
};
baseB::operator baseA()
{
    return this->obj;
}
baseB::operator int()
{
    return this->x;
}
void func(int x)
{}
void func(baseA obj)
{}
main()
{
    baseB obj;
    func(obj);
} */

/* main()
{
    int x = 10, y = 15;
    int z = ++x + y++;
    cout << z << x << y;
} */

/* //kq = CD
class main
{
    public:
        main();
        ~main();
};
main::main()
{
    cout << 'C';
}
main::~main()
{
    cout << 'D';
}
void func()
{
    class main obj;
}
main()
{
    func();
} */

/* // kq = 12
class base
{
    public:
        int x;
};
main()
{
    int base :: *ptr = &base::x;
    base obj;
    obj.x = 1;
    cout << obj.x;
    obj.*ptr = 2;
    cout << obj.x;
} */

/* //kq = 24
long func(long = 5);
main()
{
    for(int i = 0; i <= 0; i++)
        cout << func();
}
long func(long x)
{
    if(x < 2)
        return 1;
    long y = 1;
    for(long i = 1; i <= x - 1; i++)
        y = y * i;
    return y;
} */

/* //kq = 1010
class exam
{
    public:
        int prop;
        exam* operator->();
        friend ostream& operator<<(ostream&, const exam&);
};
exam* exam::operator->()
{
    return this;
}
ostream& operator<<(ostream& o, const exam& obj)
{
    o << obj.prop;
    return o;
}
main()
{
    exam obj;
    obj->prop = 10;
    cout << obj << obj->prop;
} */

/* //kq = 0
class exam
{
    int var;
    public:
        exam(int);
        ~exam();
        int getvar();
};
exam::exam(int var)
{
    var = var;
}
exam::~exam()
{}
int exam::getvar()
{
    return this->var;
}
main()
{
    exam obj(1);
    cout << obj.getvar();
} */

/* //kq = 1
class base
{
    int x;
    public:
        base(int);
        void show();
};
base::base(int x)
{
    this->x = x;
}
void base::show()
{
    cout << this->x;
}
main()
{
    base obj(1);
    obj.base::show();
} */

class car
{
    public:
        int speed;
};
main()
{
    int car ::* pspeed = &car::speed;
    car c1;
    c1.speed = 1;
    cout << c1.speed;
    c1.*pspeed = 2;
    cout << c1.speed;
}