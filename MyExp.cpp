#include "MyExp.h"

MyExp::MyExp(string e, int s)
    : Exp(e), stt(s)
{}

MyExp::~MyExp()
{}

ostream& operator<<(ostream& o, const MyExp& e)
{
    o << e.stt << ", " << e.err << endl;
    return o;
}