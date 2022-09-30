// 6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
// int ) to Time class.

// Example-

#include <iostream>
using namespace std;

class Time
{
private:
    int h, m, sec;

    void normalize()
    {
        m = m + sec / 60;
        sec = sec % 60;
        h = h + m / 60;
        m = m % 60;
    }

public:
    Time()
    {   
        h= m = sec = 0;
    }
    Time(int duration)
    {
        sec = duration;
        h = 0;
        m = 0;
        normalize();
    }
    void setTime(int h,int m,int s){
      this->h = h;
      this->m = m;
      this->sec += s;
      normalize();
    }
    void display()
    {
        cout <<h<<":"<<m<<":"<<sec << endl;
    }
};

int main()
{
    int duration;
    cout << "Enter time duration in seconds" << endl;
    cin >> duration;
    Time t1 = duration;
    t1.display();
    t1.setTime(2,30,30);
    t1.display();

    return 0;
}