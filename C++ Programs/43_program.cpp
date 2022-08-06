
#include<iostream>
#include<conio.h>
 using namespace std;

class Time
{
    private:
    int hour,min,second;
    public:

    void setTime(int x,int y,int z)
    {
        hour = x;
        min = y;
        second = z;
    }

    void showTime()
    {
        cout<<hour<<" hour "<<min<<" min "<<second<<" second"<<endl;
    }

    Time add(Time t)
    {
        Time temp;
        temp.hour   =   hour   + t.hour;
        temp.min    =   min    + t.min;
        temp.second =   second + t.second;
        return temp;
    }

    Time sub(Time t)
    {
        Time temp;
        temp.hour   =   hour   - t.hour;
        temp.min    =   min    - t.min;
        temp.second =   second - t.second;
        return temp;
    }


};

int main()
{
    Time t1,t2,t3,t4;
    t1.setTime(23,55,30);
    t1.showTime();
    t2.setTime(23,34,20);
    t2.showTime();
    t3 = t1.add(t2);
    t4 = t1.sub(t2);
    t3.showTime();
    t4.showTime();
      
}