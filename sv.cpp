#include <iostream>
#include "sv.h"
using namespace std;

/* sv::sv(int id, bool gt, double dtb)
    :MSSV(id), Gender(gt), GPA(dtb)
{

}

sv::~sv()
{
    cout << "huy";
}

ostream& operator<<(ostream& o, const sv& x)
{
    o << x.MSSV << " " << x.Gender << " " << x.GPA << endl;
    return o;
}

istream& operator>>(istream& i, sv& x)
{
    cout << "MSSV: ";
    i >> x.MSSV;
    cout << "Gender: ";
    i >> x.Gender;
    cout << "GPA";
    i >> x.GPA;
    return i;
}

bool sv::operator==(const sv& S)const
{
    return this->MSSV == S.MSSV;
}

int sv::getMS()
{
    return this->MSSV;
} */

/* sv::sv(string mlsh, int k, int mhp, int sl, string n)
    : LSH(mlsh, k), HP(mhp, sl), name(n)
{
    cout << "Dung SV" << endl;
}
sv::~sv()
{
    cout << "Huy SV" << endl;
}
void sv::showSV()
{
    cout << this->MaLSH << ", " << this->Khoa << ", " << this->MaHP << ", " << this->SL << ", " << this->name << endl;
}
void sv::show()
{
    cout << "SV" << endl;
} */

sv::sv(string m, string n, bool g, double d)
    : MSSV(m), name(n), Gender(g), DTB(d)
{

}

sv::~sv()
{
    cout << "Huy SV" << endl;
}

void sv::show()
{
    cout << this->MSSV << ", " << this->name << ", " << this->Gender << ", " << this->DTB << " ";
}

bool sv::operator==(const sv& s)
{
    return (this->MSSV == s.MSSV);
}

ostream& operator<<(ostream& o, const sv& s)
{
    o << s.MSSV << ", " << s.name << ", " << s.Gender << ", " << s.DTB << endl;
    return o;
}