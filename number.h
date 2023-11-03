
class number
{
    private:
        double d;
    public:
        number(double = 0.0);
        ~number();
        operator int();
        operator double();;
};