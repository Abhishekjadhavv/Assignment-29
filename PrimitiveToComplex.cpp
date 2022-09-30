// 1.Write a C++ program to convert Primitive type to Complex type.
// Example -
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }

    Complex(int x)
    {
        real = x;
        img = x;
    }

    void display()
    {
        cout << "Real = " << real << " Img = " << img << endl;
    }
};

int main()
{
    Complex c1;
    int x = 6;
    c1 = x;
    c1.display();
    return 0;
}
