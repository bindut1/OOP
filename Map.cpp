#include "Map.h"

template<typename T, typename U, template <typename V> class C>
Map<T, U, C>::Map()
{
    cout << "Tao Map" << endl;
}

template<typename T, typename U, template <typename V> class C>
Map<T, U, C>::~Map()
{}

template<typename T, typename U, template <typename V> class C>
void Map<T, U, C>::show()
{
    cout << "Show Map" << endl;
}

template<typename T, typename U, template <typename V> class C>
ostream& operator<<(ostream& o, const Map<T, U, C>& m)
{
    o << m.k << ", " << m.v;
    return o;
}
