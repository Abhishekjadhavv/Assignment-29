// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
// Dollar and Dollar to Rupee conversion.
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
    int getRupee()
    {
        return rup;
    }

    void display()
    {
        cout << "Rupee : " << rup << endl;
    }
};

class Dollar
{
private:
    float dol;

public:
    Dollar(Rupee r)
    {
        dol = r.getRupee() / 65.0;
    }
    void display()
    {
        cout << "Dollar : " << dol << endl;
    }

    float getDollar(){
        return dol;
    }

    operator Rupee(){
        return dol * 65;
    }
};

int main()
{
    Rupee r = 65;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}