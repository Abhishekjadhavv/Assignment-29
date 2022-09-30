// 8. Create a Rupee class and convert it into int. And Display it.

// Example-
#include <iostream>
using namespace std;
class Rupee
{
private:
    int rup;

public:
    Rupee(int r)
    {
        rup = r;
    }

    operator int()
    {
        return rup;
    }

    void display(){
        cout<<"Rupee : "<<rup<<endl;
    }
};

int main()
{
    Rupee r = 10;
    int x = r;
    r.display();
    cout <<"x : "<<x<<endl;
    return 0;
}