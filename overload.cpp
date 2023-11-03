#include <iostream>
using namespace std;

/* //kq = CCCDDD
class Exam
{
    public:
        Exam();
        ~Exam();
};

Exam::Exam()
{
    cout << 'C';
}

Exam::~Exam()
{
    cout << 'D';
}

main()
{
    Exam* ptr = new Exam[3];
    delete[] ptr;
} */

/* //kq = 9
namespace Exam
{
    int x = 9;
    int y = 1;
}

namespace y = Exam;

main()
{
    cout << y::x;
} */

/* //kq = 1
class Exam
{
    int& ref;
    public:
        Exam(int);
        ~Exam();
        int getRef();
};

Exam::Exam(int ref)
    : ref(ref)
{}

Exam::~Exam()
{}

int Exam::getRef()
{
    return this->ref;
}

main()
{
    Exam obj(1);
    cout << obj.getRef();
} */

/* //kq = 0
class base
{
    public:
        struct Struct
        {
            int x;
            float y;
            void func()
            {
                y = x = (x = 4 * 4);
                y = --y * y;
            }
            void show()
            {
                cout << y;
            }
        } obj2;
} obj1;

main()
{
    obj1.obj2.show();
} */

/* //kq = CD
class Exam
{
    public:
        Exam();
        ~Exam();
};

Exam::Exam()
{
    cout << 'C';
}

Exam::~Exam()
{
    cout << 'D';
}

main()
{
    delete new Exam();
} */


/* //compile error
class Exam
{
    int x, y;
    public:
        Exam(int = 0, int = 0);
        ~Exam();
        int getX() const;
        int getY();
};

Exam::Exam(int x, int y)
    : x(x), y(y)
{

}

Exam::~Exam()
{

}

int Exam::getX() const
{
    return this->x;
}

int Exam::getY() 
{
    return this->y;
}

main()
{
    const Exam obj;
    cout << obj.getX() << obj.getY();
}
 */

/* //kq = 295
class Exam
{
    int x, y;
    public:
        ~Exam();
        void setxy();
        int func(const Exam&);
};

Exam::~Exam()
{

}

void Exam::setxy()
{
    this->x = 100;
    this->y = 200;
}

int Exam::func(const Exam& obj)
{
    return int(obj.x + obj.y) - 5;
} 

main()
{
    Exam obj;
    obj.setxy();
    cout << obj.func(obj);
} */

/* //kq = 1
class exam
{
    int var;
    public:
        exam(int);
        exam(const exam&);
        int getvar();
};

exam::exam(int var)
    : var(var)
{

}

exam::exam(const exam& obj)
    : var(obj.var)
{

}

int exam::getvar()
{
    return this->var;
}

main()
{
    exam obj1(1);
    exam obj2 = obj1;
    cout << obj2.getvar();
} */

/* //kq = 1010
class base
{
    int x, y, z;
    public:
        void func(int = 12, int = 21, int = 9);
        void show();
        void setdata(int, int);
};

void base::func(int x, int y, int z)
{
    this->x = x;
    this->y = y += 10;
    this->z = this->x -= 2;
}

void base::show()
{
    cout << this->x << this->y;
}

void base::setdata(int x, int y)
{
    this->func(x, 0, y);
}

main()
{
    base *ptr = new base;
    (*ptr).setdata(12, 20);
    ptr->show();
    delete ptr;
} */

/* //kq = D
class ex
{
    public:
        ~ex();
};

ex::~ex()
{
    cout << 'D';
}

main()
{
    ex* ptr = new ex[3];
    delete ptr;
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
}
 */
/* //kq = 9.72
class base
{
    double x;
    public:
        base(double = 0.0);
        operator double();
        operator int();
};

base::base(double x) : x(x)
{}

base::operator double()
{
    return this->x;
}

base::operator int()
{
    return int(this->x);
}

main()
{
    base obj1(9.7), obj2(2.6);
    double x = double(obj1);
    int y = int(obj2);
    cout << x << y;
} */

/* //kq = 55106156
class ex
{
    int x, y, z;
    public:
        ex(int = 0, int = 0, int = 0);
        ex operator()(ex);
        ex operator()(int, int, int);
        friend ostream& operator<<(ostream&, const ex&);
};

ex::ex(int x, int y, int z)
    :x(x), y(y), z(z)
{

}

ex ex::operator()(ex obj)
{
    return ex((this->x + obj.x)/2, (this->y + obj.y)/2, (this->z + obj.z)/2);
}

ex ex::operator()(int x, int y, int z)
{
    return ex(this->x + x, this->y + y, this->z + z);
}

ostream& operator<<(ostream& o, const ex& obj)
{
    o << obj.x << obj.y << obj.z;
    return o;
}

main()
{
    ex obj_x(1, 2, 3), obj_y(10, 10, 10), obj_z;
    obj_z = obj_x(obj_y(100, 200, 300));
    cout << obj_z;
} */

/* //kq = 2
class base
{
    int x;
    public:
        base(int = 1);
        friend ostream& operator<<(base&, ostream&);
};

base::base(int x) : x(x)
{}

ostream& operator<<(base& obj, ostream &o)
{
    o << obj.x;
    return o;
}

main()
{
    base obj(2);
    obj << cout;
} */

/* //kq = 2
class base
{
    int x;
    public:
        base(int = 1);
        int operator,(int);
};

base::base(int x) : x(x)
{}

int base::operator,(int x)
{
    return x;
}

main()
{
    base obj;
    int x = 2;
    cout << (obj, x);
} */

/* 
//co 2 ham thanh vien, 2 ham kia la ham ban khong phai ham thanh vien
class ex
{
    int prop;
    public:
        void print();
        friend void show();
        bool compare();
        friend bool lost();
}; */

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

/* //compile error vi khai bao ham thanh vien o private
class ex
{
    int prop;
    bool operator<(const ex&);
    public:
        ex();
        ex(double);
        ~ex();
};

bool ex::operator<(const ex& obj)
{
    return this->prop < obj.prop ? true : false;
}

ex::ex()
{

}

ex::ex(double prop)
    : prop(prop)
{}

ex::~ex()
{}

main()
{
    ex obj_x(10);
    ex obj_y = ex(14);
    if(obj_x < obj_y)
        cout << "hihi";
    else 
        cout << "hehe";
} */

/* //kq = 1
class base
{
    public:
        virtual ~base();
};


base::~base()
{
    cout << "1";
}

main()
{
    base *ptr = new base();
    delete ptr;
} */
/* 
//kq = -61
class base
{
    int x;
    public:
        void func(double, int, char);
        void func(double, char, char);
};

void base::func(double, char y, char z)
{
    this->x = int(z);
    this->x = int(y);
    this->x = y + z;
    cout << x;
}

main()
{
    base obj;
    obj.func(15.09, 'A', char('B' + 'B'));
} */

/* //compile error vi chua overloading operator ==
class comp
{
    int R, I;
    public:
        comp(int = 0, int = 0);
};

comp::comp(int R, int I)
{
    this->R = R;
    this->I = I;
}

main()
{
    comp obj1(10, 5), obj2(2, 4);
    (obj1 == obj2) ? cout << "same" : cout << "not";
} */

/* //compile error
class x
{
    public:
        int a;
        void f(int);
};

void x::f(int b)
{
    cout << b;
}

main()
{
    int x :: *ptr = &x::a;
    void (x::*ptr) (int) = &x::f;
    x xobj;
    xobj.*ptr = 10;
    cout << xobj.*ptr;
    (xobj.*ptr)(20);
} */

/* //kq = 100100
class x
{   
    int prop;
    public:
        x(int);
        ~x();
        int getprop();
};

x::x(int prop)
    : prop(prop)
{}

x::~x()
{

}

int x::getprop()
{
    return this->prop;
}

main()
{
    x obj(100);
    cout << obj.getprop() << obj.getprop();
} */

/* //kq = done
struct a
{
    private:
        int i, j, k;
    public:
        int f();
        void g();
};

int a::f()
{
    return i + j + k;
}

void a::g()
{
    i = j = k = 0;
}

class b
{
    int i, j, k;
    public:
        int f();
        void g();
};

int b::f()
{
    return this->i + this->j + this->k;
}

void b::g()
{
    this->i = this->j = this->k = 0;
}

main()
{
    a A;
    b B;
    A.f();
    A.g();
    B.f();
    B.g();
    cout << "done";
} */

/* //kq = hi
struct baseA
{
    int pA;
};

struct baseB
{
    int* pB;
};

struct baseC : public baseA, public baseB
{

};

main()
{
    baseC* ptr = new baseC;
    ptr->pB = 0;
    cout << "hi";
} */

/* //khong the bien dich
class x
{
    public:
        virtual x();
};

x::x()
{

}

main()
{

} */

/* //kq = 55
namespace ex
{
    int v1 = 10;
}

namespace ex
{
    int v2 = 10;
}

main()
{
    ex::v1 = ex::v2 = 5;
    cout << ex::v1 << ex::v2;
} */

/* //compile error
main()
{
    const int x;
    cout << x;
} */

/* //kq = 4
class ex
{
    static int cnt;
    int var;
    ex();
    ~ex();
};

int ex::cnt;
ex::ex()
{}

ex::~ex()
{}

main()
{
    cout << sizeof(ex);
}
 */
/* //empty
class ex
{
    ~ex();
};

ex::~ex()
{
    cout << 'D';
}

main()
{
    ex *ptr = new ex;
} */

/* //kq = 1122
struct Struct
{
    short x;
};
main()
{
    Struct obj1;
    Struct& obj2 = obj1;
    obj1.x = 1;
    cout << obj1.x << obj2.x;
    obj2.x = 2;
    cout << obj1.x << obj2.x;
} */

/* //kq = 12
class ex
{
    int v1, v2;
    public:
        ex(int = 1, int = 2);
        ~ex();
        void func();
};

ex::ex(int v1, int v2)
    : v1(v1), v2(v2)
{

}

ex::~ex()
{

}

void ex::func()
{
    cout << this->v1 << this->v2;
}

main()
{
    ex obj;
    obj.func();
} */

/* //kq = 56
class ex
{
    public:
        int px, py;
};

main()
{
    ex obj;
    obj.px = 56;
    cout << obj.px;
} */

/* //kq = 16
namespace exa
{
    int vx = 4;
}

namespace exb
{
    int vx = 13;
}

main()
{
    int vx = 16;
    exa::vx;
    exb::vx;
    cout << vx;
} */

/* //kq = CD
class ex
{
    public:
        ex(char = 'C');
        ~ex();
};

ex::ex(char var)
{
    cout << var;
}

ex::~ex()
{
    cout << 'D';
}

main()
{
    ex obj;
} */

/* //another answer
class base
{
    int x, y;
    public:
        void setdata(int &, int &);
};

void base::setdata(int &x, int &y)
{
    x = x++;
    y = y;
    cout << this->x << " " << this->y;
}

main()
{
    int x = 1;
    int &y = x;
    base obj;
    obj.setdata(x, y);
} */

/* //compile error
class base
{
    int x; double y;
    public:
        base(int);
        base(int = 0, int = 10);
        void setdata(int &, double);
        void show();
};

base::base(int x) : x(x)
{}

base::base(int x, int y)
{
    this->x = x += 2;
    this->y = y * 1.0;
}

void base::setdata(int &x, double y)
{
    this->x = x;
    this->y = int(y);
}

void base::show()
{
    cout << this->x;
}

main()
{
    int x = 12;
    base obj1(x);
    base obj2();
    obj1.setdata(x, 3.14);
    obj1.show();
} */

/* //kq = 22
class base
{
    int x, y;
    public:
        void setdata(int &, int &);
        void show();
};

void base::setdata(int &x, int &y)
{
    x = 2;
    this->x = x;
    this->y = y;
    this->show();
}

void base::show()
{
    cout << this->x << this->y;
}

main()
{
    int x = 1;
    base obj;
    obj.setdata(x, x);
} */

/* //kq = KHO
class base
{
    public:
        void getdata(char *, int, int);
};

void base::getdata(char *ptr, int x, int y)
{
    for(int i = x - 1; y > 0; i++)
    {
        cout << *(ptr + i);
        y--;
    }
}

main()
{
    base obj;
    obj.getdata((char*)"KHOACNTT", 1, 3);
} */

/* //kq = 123
class ex
{
    int prop;
    static int next_prop;
    public:
        int getprop();
        ex();
        ~ex();
};

int ex::next_prop = 1;
int ex::getprop()
{
    return this->prop;
}

ex::ex()
{
    this->prop = ex::next_prop++;
}

ex::~ex()
{

}

main()
{
    ex objx, objy, objz;
    cout << objx.getprop() << objy.getprop() << objz.getprop();
} */

/* //kq = CNTTCNTT12
class base
{
    public:
        int x;
    public:
        void show();
};

void base::show()
{
    cout << "CNTT";
}

void (base :: *x)() = &base::show;
int base :: *y = &base :: x;
main()
{
    base obj;
    base *ptr = new base;
    (obj.*x)();
    (ptr->*x)();
    obj.*y = 1;
    ptr->*y = 2;
    cout << obj.*y << ptr->*y;
} */

/* //compile error
class ex
{
    int v1, v2;
    public:
        ex();
        ex(int, int);
        ~ex();
        void func();
};

ex::ex()
{

}

ex::ex(int v1, int v2)
{
    ex obj(v1, v2);
    obj.func();
    *this = obj;
}
ex::~ex()
{

}
void ex::func()
{
    cout << this->v1 << this->v2;
}

main()
{
    ex obj(1, 2);
    obj.func();
} */

/* //kq = ITF
class
{
    public:
        void show()
        {
            cout << "ITF";
        }
} object;

main()
{
    object.show();
} */

/* //compile error
class ex
{
    static int var;
    public:
        static void setvar(int);
        static void showvar();
};

int ex::var = 0;
void ex::setvar(int var)
    : var(var)
{

}

void ex::showvar()
{
    cout << ex::var;
}

main()
{
    ex::setvar(1);
    ex::showvar();
} */

/* //kq = 252
struct ex
{
    int pi;
    char pc;
};

main()
{
    struct ex obj = {25, 50};
    struct ex* ptr = (struct ex*) & obj;
    cout << ptr->pi << ptr->pc;
} */

/* //kq = 12 -> another answer
class base
{
    int x;
    public:
        base(int);
        int fun();
};

base::base(int x) : x(x)
{

}

int base::fun()
{
    static int x = 0;
    int y = this->x % 10;
    this->x /= 10;
    if((this->x /100))
        fun();
    x = x * 10 + y;
    return this->x;
}

main()
{
    base obj(12345);
    cout << obj.fun();
} */


/* //compile er
class ex
{
    static int cnt;
    public:
        ex();
        void setcnt();
};

int ex::cnt = 0;
ex::ex()
{
    (ex::cnt == 1) ? cout << ex:: : ex::cnt++;
}

void ex::setcnt()
{
    cnt << ex::cnt;
}

main()
{
    ex obj1;
    obj1.setcnt();
    ex obj2;
    obj2.setcnt();
} */

/* //kq = 0
class ex
{
    double x, y, z;
    double result;
    public:
        ex(double = 0, double = 0, double = 0);
        ~ex();
        void fun(int);
};

ex::ex(double x, double y, double z)
    : x(y), y(z), z(x)
{

}
ex::~ex()
{

}

void ex::fun(int x)
{
    this->result = (this->x == 0) ? 3.14f * this->z * this->z : x * this->z;
    cout << this->result;
}

main()
{
    ex obj(10, 10, 20);
    obj.fun(0);
}
 */

/* //kq = 01
class ex
{
    static int var;
    public:
        ex();
        ~ex();
        static int getvar();
};

int ex::var = 0;
ex::ex()
{
    ex::var++;
}

ex::~ex()
{

}

int ex::getvar()
{
    return ex::var;
}

main()
{
    cout << ex::getvar();
    ex* ptr = new ex;
    cout << ptr->getvar();
} */

/* //kq = 0
class base
{
    public:
        struct Struct
        {
            int x; float y;
            void fun()
            {
                y = x = (x = 4 * 4);
                y = --y * y;
            }
            void show()
            {
                cout << y;
            }
        }obj2;
}obj1;

main()
{
    obj1.obj2.show();
} */

/* //kq = 68
class base
{
    int x, y;
    public:
        void show();
        void main();
};

void base::show()
{
    base obj;
    obj.x = 2;
    obj.y = 4;
    cout << this->x << this->y;
}

void base::main()
{
    base obj;
    obj.x = 6;
    obj.y = 8;
    obj.show();
}

main()
{
    base obj;
    obj.main();
} */

/* //kq = 1
class examA
{
    int var;
    public:
        examA(int);
        ~examA();
        void getvar();
};

examA::examA(int var)
    : var(var)
{

}

examA::~examA()
{

}

void examA::getvar()
{
    cout << this->var;
}

class examB
{
    int var;
    public:
        static examA obj;
        examB(int);
        ~examB();
};
examA examB::obj(1);
examB::examB(int var)
    : var(var)
{

}

examB::~examB()
{

}

main()
{
    examB obj(1);
    obj.obj.getvar();
} */

/* //print ASCII value of 99
class base
{
    int x;
    public:
        base(int, float);
};

base::base(int x, float y)
{
    cout << char(y);
}

main()
{
    base *ptr = new base(35, 99.50f);
} */

/* //kq = C1DC2D
class ex
{
    public:
        ex();
        ex(int);
        ~ex();
};
ex::ex()
{
    cout << "C1";
}
ex::ex(int var)
{
    cout << "C2";
}
ex::~ex()
{
    cout << 'D';
}
void fun()
{
    ex();
    ex(1);
}
main()
{
    fun();
} */

/* class base
{
    int size;
    float *ptr;
    public:
        base(int = 2, int = 3);
};
base::base(int size, int n) : size(size)
{
    this->ptr = new float[this->size];
    for(int i = 0; i < this->size; i++)
        *(this->ptr + i) = n;
}
main()
{
    base obj;
} */

/* //kq = 3
class base
{
    static int cnt;
    public:
        static void fun1();
        static void fun2(int);
        static void show();
};
int base::cnt = 0;
void base::fun1()
{
    cnt = 2;
}

void base::fun2(int x)
{
    cnt += x;
}

void base::show()
{
    cout << cnt;
}
main()
{
    base::fun1();
    base::fun2(1);
    base::show();
} */

/* // kq = 1
class ex
{
    public:
        ex(int);
        ex();
        ~ex();
};
ex::ex(int var)
{
    cout << var;
}
ex::ex()
{
    cout << "IT";
}
ex::~ex()
{

}
main()
{
    ex obj(1);
} */

/* //kq = 2
class ba
{
    int x, y;
    public:
        ba(int = 1, int = 1);
        void show();
};
ba::ba(int x, int y)
{
    this->x = x;
    this->y = y;
}
void ba::show()
{
    cout << this->x * this->y;
}
class bb
{
    ba obj;
    public:
        bb(int, int);
};
bb::bb(int x, int y) : obj(x, y)
{
    this->obj.show();
}
main()
{
    bb obj(1, 2);
} */

/* //kq = CNTTCNTT vi goi ham dung 2 lan
class base
{
    int x;
    public:
        base(int);
};
base::base(int x) : x(x)
{
    cout << "CNTT";
}
main()
{
    base obj(2);
    obj = 3;
} */

/* // kq = D
class ex
{
    public:
        ~ex();
};
ex::~ex()
{
    cout << "D";
}
main()
{
    ex *ptr = new ex[3];
    delete ptr;
} */

/* //kq = 5
namespace exA
{
    int vx = 10;
}

namespace exB
{
    int vx = 5;
}
main()
{
    using namespace exB;
    cout << vx;
} */

/* //kq = 1234
class ex
{
    static int cnt;
    public:
        ex();
        ~ex();
        ex& fun();
};
int ex::cnt = 0;
ex::ex()
{

}
ex::~ex()
{

}
ex& ex::fun()
{
    ex::cnt++;
    cout << ex::cnt;
    return *this;
}
main()
{
    ex* ptr = new ex;
    ptr->fun().fun().fun().fun();
} */

/* //garbage value
class ex
{
    int var;
    public:
        ex(int = 1);
        ~ex();
        void func();
};
ex::ex(int var)
{
    var = var;
}
ex::~ex()
{}
void ex::func()
{
    cout << this->var;
}
main()
{
    ex* ptr = new ex;
    ptr->func();
} */

/* //ITFDUT
class base
{
    public:
        base();
        ~base();
};
base::base()
{
    cout << "ITF";
}
base::~base()
{
    cout << "DUT";
}
main()
{
    base obj;
} */

/* //loi compile
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
main obj;
int main()
{
    return 0;
} */

/* //loi compile ->
class ex
{
    static int var;
    public:
        ex();
        ~ex();
        static int getvar();
};
int ex::var = 0;
ex::ex()
{
    ex::var++;
}
ex::~ex()
{

}
int ex::getvar()
{
    return ex::var;
}
main()
{
    cout << ex::getvar();
    ex* ptr = new ex;
    cout << (*ptr)->getvar();
} */

/* //loi compile static
class ex
{
    public:
        ex();
        ~ex();
        void fun();
};
ex::ex()
{}
ex::~ex()
{

}
static void ex::fun()
{
    cout << "DUT";
}
main()
{
    ex::fun();
} */

/* //kq = ITFDUT
class ex
{
    public:
        int prop;
        ex();
        ~ex();
} obj;
ex::ex()
{
    cout << "ITF";
}
ex::~ex()
{
}
int main()
{
    cout << "DUT";
} */

/* //kq = 234
class ex
{
    int x, y, z;
    public:
        ex(int, int, int);
        void fun();
};
ex::ex(int x, int y, int z)
    :x(++x), y(++y), z(++z)
{

}
void ex::fun()
{
    cout << this->x++ << this->y++ << this->z++;
}
main()
{
    ex obj(1, 2, 3);
    obj.fun();
} */

/* class ex
{
    int v1;
    static int v2;
    static void fun1();
    void fun2();
} obj;
void ex::fun1()
{

}
void ex::fun2()
{

} */

/* //kq = 6
class ex
{
    static int cnt;
    public:
        ~ex();
        void func();
};
int ex::cnt = 5;
ex::~ex()
{
    ex::cnt--;
}
void ex::func()
{
    ex::cnt++;
    cout << ex::cnt;
}
main()
{
    ex obj;
    obj.func();
} */

/* //kq = 16 -> another answer
struct exA;
struct exB
{
    void fun(exA*);
};
struct exA
{
    int pa;
    public:
        void init();
        friend void fun(exA*, int);
        friend void exB::fun(exA*);
        friend struct exC;
        friend void fun();
};
void exA::init()
{
    pa = 0;
}
void fun(exA* ptr, int pc)
{
    ptr->pa = pc;
}
void exB::fun(exA* ptr)
{
    ptr->pa = 47;
    cout << ptr->pa;
}
struct exC
{
    int pc;
    public:
        void init();
        void fun(exA*);
};
void exC::init()
{
    pc = 99;
}
void exC::fun(exA* ptr)
{
    ptr->pa += pc;
    cout << pc + ptr->pa;
}
void fun()
{
    exA obj;
    obj.pa = 100;
    cout << obj.pa;
}
main()
{
    exA obj_a;
    exC obj_c;
    obj_c.fun(&obj_a);
} */

/* //kq = 40
class ex
{
    double pr;
    public:
        friend void fun(ex&);
        void fun(double);
        void setpr(double);
};
void ex::setpr(double pr)
{
    this->pr = pr;
}
void ex::fun(double pr)
{
    this->pr *= 2;
}
void fun(ex& obj)
{
    obj.fun(obj.pr);
    obj.pr *= 2;
    cout << obj.pr;
}
main()
{
    ex obj;
    obj.setpr(10.0);
    fun(obj);
} */

/* class ex
{
    private:
        int v1;
    public:
        int v2;
    private:
    int v3;
    protected:
        int v4;
    private:
    private:
        int v6, v7;
}; */

/* //kq = 00
class base
{
    int x, y;
    public:
        base(int = 1, int = 2);
        base(base *);
        void show();
};
base::base(int x, int y) : x(x), y(y)
{}
base::base(base *obj)
{
    this->x = obj->x = 0;
    this->y = obj->y = 0;
}
void base::show()
{
    cout << this->x << this->y;
}
main()
{
    base obj(new base);
    obj.show();
} */