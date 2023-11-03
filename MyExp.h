#include "Exp.h"

class MyExp : public Exp
{
    private:
        int stt;
    public:
        MyExp(string = "", int = 0);
        ~MyExp();
        friend ostream& operator<<(ostream&, const MyExp&);
};