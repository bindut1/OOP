#include "Key.cpp"
#include "Value.cpp"

template<typename T, typename U, template <typename V> class C>
class Map
{
    private:
        C<T> k;
        C<U> v;
    public:
        Map(); //khoi tao ham dung co tham so????
        ~Map();
        void show();
        template<typename T1, typename U1, template <typename V1> class C1>>
        friend ostream& operator<<(ostream&, const Map<T1, U1, C1>&);
};
