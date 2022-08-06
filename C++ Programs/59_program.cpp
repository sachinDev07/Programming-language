#include<iostream>
#include<conio.h>
 using namespace std;
 class Time
 {
    private:
       int hour,min,sec;
    public:
    void setTime(int x ,int y,int z){hour=x; min=y; sec=z;}
    void showTime(){cout
                       <<" "<< hour <<" hour "
                       <<" "<< min  <<" min "
                       <<" "<< sec  <<" sec "<<endl;
                   }
    Time operator++()
    {
        Time t;
        t.hour = hour;
        t.min = min;
        t.sec = ++sec;
        return t;
    }

    Time operator++(int)
    {
        Time t;
        t.hour = hour;
        t.min = min;
        t.sec = sec++;
        return t;
    }
    Time operator!()
    {
        Time t;
        t.hour = !hour;
        t.min  =  min;
        t.sec  =  sec;
        return t;
    }
 };
 

 int main()
 {
     Time t1,t2,t3,t4,t5;
     system("cls");
     t1.setTime(24,55,59);
     
     t4.setTime(0,0,0);

     t1.showTime();
     t2=++t1;
     t1.showTime();

     t3=t1++;
     t3.showTime();
     t1.showTime();

     t5=!t4;
     t5.showTime();
 }