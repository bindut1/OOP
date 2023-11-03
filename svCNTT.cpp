#include "svCNTT.h"

svCNTT::svCNTT(string m, string n, bool g, double d, string lt)
    : sv(m, n, g, d), LT(lt)
{

}

svCNTT::~svCNTT()
{
    cout << "Huy SV CNTT" << endl; 
}

void svCNTT::show()
{
    sv::show();
    cout << this->LT << endl;
}

ostream& operator<<(ostream& o, const svCNTT& s)
{
    o << s.MSSV << ", " << s.name << ", " << s.Gender << ", " << s.DTB << ", " << s.LT << endl;
    return o; 
}

bool svCNTT::operator==(const svCNTT& s)
{
    return (this->MSSV == s.MSSV && this->LT == s.LT);
}