
#include <iostream>

class Vector
{
public:
    Vector()
    {}
    Vector(float _x, float _y, float _z): x(_x), y(_y), z(_z)
    {}
    void xyz()
    {
        std::cout << "\n" << x << " " << y << " " << z;
    }
    void show()
    {
        std::cout << x * x + y * y + z * z << "\n";
    }
private:
    float x = 10, y = 10, z = 5;
};

int main()
{
    Vector v(7.3, 8.5, 6.3);
    v.show();
}

