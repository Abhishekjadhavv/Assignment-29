// 7. Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -

#include <iostream>
using namespace std;

class Time
{
private:
    int h, m,s;

    void normalize()
    {
        m = m + s/60;
        s = s%60;
        h  = h + m/60;
        m = m%60;
    }

public:
    Time(){
        h = m = s = 0;
    }

    Time(int h, int m)
    {
        this->h = h;
        this->m = m;
        s = 0;
        normalize();
    }

    void setTime(int h,int m,int s){
       this->h = h;
       this->m = m;
       this->s = s;
       normalize();
    }

    int getMit(){
        return m;
    }
    int getHour(){
        return h;
    }
    int getSec(){
        return s;
    }

    void display()
    {
        cout <<"Hour : " << h << " Minute : " << m << endl;
    }
};

class Minute
{
    private:
      int m;
    public:
    Minute(){
        m = 0;
    }
    Minute(Time t){
        m = t.getMit();
    }
    void display()
    {
        cout <<"Minute : " << m << endl;
    }

};

int main()
{
    Time t1(2, 30);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1 ;// Fetch minute from time
    t1.display();
    m1.display();
    t1.setTime(3,68,20);
    t1.display();
    return 0;
}