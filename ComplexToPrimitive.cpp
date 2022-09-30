// 2. Write a C++ program to convert Complex type to Primitive type.
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
    void setData(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "Real = " << real << " Img = " << img << endl;
    }
    operator int()
    {
        return real;
    }
};

int main()
{
    Complex c1;
    c1.setData(3, 4);
    int x;
    x = c1;
    c1.display();
    cout<<c1<<endl;
    return 0;
}