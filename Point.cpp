#include "Point.h"
#include <iostream>
using namespace std;

/* int Point::n = 0;

void Point::Print()
{
    cout << Point::n << ", " << Point::m << endl;
}


void Point::TT(int x)
{
    //xVal += x;
    this->xVal += x;
    //*(this).yVal += x;
    this->yVal += x;
}

void Point::Show()
{
    cout << this->xVal << ", " << this->yVal << ", " << this->z << endl;
}

Point::Point(int x, int y, int z)
    : z(z)
{
    this->xVal = x;
    this->yVal = y;
    Point::n++;
    //this->n++;
}
//thuoc tinh hang tinh chi duoc truy cap 1 chieu, con tt tinh duoc truy cap 2 chieu
//thuoc tinh hang const int z luon luon phai duoc khoi tao thong qua danh sach khoi tao thanh vien
//muc do uu tien cua danh sach khoi tao thanh vien cao hon so voi phep gan
//thanh vien tham chieu chi duoc khoi tao thong qua danh sach khoi tao thanh vien
/* Point::Point(int x, int y)
    : xVal(x), yVal(y)
{
    cout << this->xVal << ", " << this->yVal << endl;
    this->xVal = 8;
    this->yVal = 9;
} */

/* Point::Point(const Point& p)
: z(p.z), xVal(p.xVal), yVal(p.yVal)
{
    // this->xVal = p.xVal;
    // this->yVal = p.yVal;
    Point::n++;
}

Point::~Point()
{
    //cout << "Huy Point : " << this->xVal << ", " << this->yVal << endl;
    Point::n--;
} */ 

/* int Point::getxVal()
{
    return this->xVal;
}

void Point::setxVal(int new_value)
{
    this->xVal = new_value;
}

void changePoint(Point &p)
{
    p.xVal = 5;
    p.yVal = 7;
} */ 

/* void Point::Show()
{
    cout << this->xVal << ", " << this->yVal << endl;
}

Point::Point(int x, int y)
{
    this->xVal = x;
    this->yVal = y;
}

Point::Point(int t)
    : xVal(t), yVal(t)
{}

Point operator+(const Point& p1, const Point& p2)
{
    // Point p(p1.xVal + p2.xVal, p1.yVal + p2.yVal);
    // return p;
    return Point(p1.xVal + p2.xVal, p1.xVal + p2.yVal); //neu chi khoi tao mot bien chi de tra ve gia tri thi se ton bo nho, nen tra ve truc tiep
}

Point Point::operator-(const Point& q)
{
    // Point p(this->xVal - q.xVal, this->yVal - q.yVal);
    // return p;
    return Point(this->xVal - q.xVal, this->yVal - q.yVal);
}

Point::~Point()
{
    cout << "Huy Point : " << this->xVal << ", " << this->yVal << endl; 
}

ostream& operator<<(ostream& o, const Point& p)
{
    o << p.xVal << ", " << p.yVal << endl;
    return o;
}   

 ostream& operator<<(const Point& p, ostream& o)
{
    o << p.xVal << ", " << p.yVal << endl;
    return o;
}

 istream& operator>>(istream& i, Point& p)
{
    cout << "xVal = ";
    i >> p.xVal;
    cout << "yVal = ";
    i >> p.yVal;
    return i;
} 

const Point& Point::operator=(const Point& p)
{
    if(this != &p)
    {
        cout << "=" << endl;
        this->xVal = p.xVal;
        this->yVal = p.yVal;
    }
    return *this;
}

 Point::Point(const Point& p)
    : xVal(p.xVal), yVal(p.yVal)
{
    cout << "copy" << endl;
}

bool Point::operator==(const Point& p)
{
    return (this->xVal == p.xVal && this->yVal == p.yVal);
}


Point& Point::operator++()
{
    this->xVal++;
    this->yVal++;
    return *this;
}

const Point Point::operator++(int)
{
    Point bef = *this;
    this->xVal++;
    this->yVal++;
    return bef;
}   */

/* void Point::show()
{
    cout << this->xVal << ", " << this->yVal << endl;
}

Point::Point(int x, int y)
{
    this->xVal = x;
    this->yVal = y;
}

Point::~Point()
{
    cout << "Huy Point" << endl;
}

ostream& operator<<(ostream& o, const Point& p)
{
    o << p.xVal << ", " << p.yVal << endl;
    return o;
}

// void Point::A(int x)
// {
//     cout << x << endl;
// }

void Point::A()
{
    cout << "ko" << endl;
} */

Point::Point(int x, int y)
{
    this->xVal = x;
    this->yVal = y;
}

Point::~Point()
{}

ostream& operator<<(ostream& o, const Point& p)
{
    o << p.xVal << ", " << p.yVal << endl;
    return o;
}

istream& operator>>(istream& i, Point& p)
{
    cout << "xVal = ";
    cin >> p.xVal;
    cout << "yVal = ";
    cin >> p.yVal;
    return i;
}
