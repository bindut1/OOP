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
} */

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

//kq = 1
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
    exam obj1(3);
    exam obj2 = obj1;
    cout << obj2.getvar();
}

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

