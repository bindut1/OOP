#include <iostream>
#include <string>
using namespace std;
class Point
{
   /*  //public, private, protected
        int xVal;
        int yVal;
        const int z;    //thanh vien hang
    public:
        static int n;   //thanh vien tinh
        const static int m = 10;    //thanh vien hang tinh
    public:
        int getxVal();
        void setxVal(int);
    //    Point();
        Point(int = 1, int = 1, int = 1);
        Point(const Point&);
        ~Point();
        void TT(int);
        void Show();
        friend void changePoint(Point &);
        static void Print(); */ //ham thanh vien tinh

 /*        int xVal;
        int yVal;
    public:
    //    Point();
        Point(int, int);
        Point(int);
    //    Point(const Point&);
        ~Point();
        void Show();
        friend Point operator+(const Point&, const Point&);
        Point operator-(const Point&);
        friend ostream& operator<<(ostream&, const Point&);
        friend ostream& operator<<(const Point&, ostream&);
        friend istream& operator>>(istream&, Point&);
        const Point& operator=(const Point&);
    //    void operator=(const Point&);
        bool operator==(const Point&);
        //prefix
        Point& operator++();
        //postfix
        const Point operator++(int); */

    /* protected:
        int xVal, yVal;
    public:
        Point(int = 1, int = 1);
    //    Point();
        ~Point();
        virtual void show();
    //    virtual void A(int);
        virtual void A();
        friend ostream& operator<<(ostream&, const Point&);   */  

    protected:
        int xVal;
        int yVal;
    public:
        Point(int = 1, int = 1);
        ~Point();
        friend ostream& operator<<(ostream&, const Point&);
        friend istream& operator>>(istream&, Point&);
};



