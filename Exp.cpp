#include "Exp.h"

Exp::Exp(string e)
    : err(e)
{}

Exp::~Exp()
{}

ostream& operator<<(ostream& o, const Exp& e)
{
    o << e.err << endl;
    return o;
}