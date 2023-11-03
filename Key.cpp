#include "Key.h"
template<typename T>
Key<T>::Key(T k)
    : key(k)
{}

template<typename T>
Key<T>::~Key()
{}

template<typename T>
ostream& operator<<(ostream& o, const Key<T>& k)
{
    o << k.key;
    return o;
}