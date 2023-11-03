#include <iostream>
using namespace std;
template<typename T>
class Key
{
    private:
        T key;
    public:
        Key(T);
        ~Key();
        template<typename T>
        friend ostream& operator<<(ostream& o, const Key<T>&);
};