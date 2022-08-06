#include<iostream>
#include<conio.h>
 using namespace std;
 class Complex
 {
     private:
     int a,b;
     public:
     void setData(int x , int y){ a=x; b=y;}
     void showData(){cout<<" "<<a <<" "<<b<<endl;}

     Complex(int x,int y)
    {
        a = x;
        b = y;
    }
    Complex()
    { a=0;b=3;}

 };
 int main()
 {
     Complex c1(2,3),c2,c3;
     c3.setData(5,5);
     c3.showData();
     c1.showData();
     c2.showData();
 }