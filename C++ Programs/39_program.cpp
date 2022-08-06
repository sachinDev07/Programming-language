// Define a class Time to represent Time ( like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.

#include<iostream>
#include<conio.h>
 using namespace std;

 class Time
 {
     private:
     int a,b,c;
     public:
     void setData(int x,int y, int z)
     {
         a = x;
         b = y;
         c = z;
     }
     void displayTime()
     {
         cout<<a<<" hr "<<b<<" min "<<c<<" sec "<<endl;
     }

 };

 int main()
{
    Time t1,t2,t3,t4;
    t1.setData(03,43,3);
    t2.setData(04,45,33);
    t1.displayTime();
    t2.displayTime();
}