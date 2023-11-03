#include <iostream>
using namespace std;

class Exp
{
    protected:
        string err;
    public:
        Exp(string = "");
        ~Exp();
        friend ostream& operator<<(ostream&, const Exp&);
};