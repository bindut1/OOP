#include <iostream>
using namespace std;
template<typename T>
class Value
{
    private:
        T value;
    public:
        Value(T);
        ~Value();
        template<typename U>
        friend ostream& operator<<(ostream&, const Value<U>&);
};