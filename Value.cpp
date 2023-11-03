#include "Value.h"
template<typename T>
Value<T>::Value()
{
    cout << "Tao Value" << endl;
}

template<typename T>
Value<T>::~Value()
{}

template<typename T>
ostream& operator<<(ostream& o, const Value<T>& v)
{
    o << v.value;
    return o;
}