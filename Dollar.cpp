// 9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.

// Example
#include<iostream>
using namespace std;

class Dollar{
   private:
      float dol;
    public:
    Dollar(){
        dol = 0;
    }
    Dollar(int n){
     dol = n/65.0;
    }
    void display(){
        cout<<"Dollar : "<<dol<<endl;
    }   
};

int main()
{
int x = 135;
Dollar d;
d = x;
d.display();
return 0;
}