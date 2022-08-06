#include <iostream>
#include <conio.h>
using namespace std;
class Time
{
private:
    int hour, min, sec;

public:
    void setTime(int x, int y, int z)
    {
        hour = x;
        min = y;
        sec = z;
    }
    void showTime() { cout << "" << hour << "hour "
                           << "" << min << "min "
                           << "" << sec << "sec " << endl; }
        
        Time operator+(Time T)
        {
            Time temp;
            temp.hour = hour + T.hour;
            temp.min =  min + T.min;
            temp.sec =  sec + T.sec;
            return temp;
        }

        Time operator-(Time T)
        {
            Time temp;
            temp.hour = hour- T.hour;
            temp.min =  min - T.min;
            temp.sec =  sec - T.sec;
            return temp;
        }
        Time operator>(Time T)
        {
            Time temp;
            temp.hour = hour > T.hour;
            temp.min =  min > T.min;
            temp.sec =  sec > T.sec;
            return temp;
        }
};

    int main()
    {
        Time t1, t2, t3, t4, t5;
        t1.setTime(3, 4, 1);
        t2.setTime(2, 4, 2);
        t1.showTime();
        t2.showTime();

        t3 = t1+t2;
        t4 = t1-t2;
        t5 = t1>t2;
        
        t3.showTime();
        t4.showTime();
        t5.showTime();
    }