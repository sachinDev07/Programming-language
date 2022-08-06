#include<iostream>
#include<conio.h>
 using namespace std;
 class Complex
 {
     private:
     int a,b;
     public:
     void setData(int x,int y){a=x;b=y;}
     void showData(){cout<<"a="<<a<<" b="<<b<<endl;}

     Complex operator+(Complex c)
     {
         Complex temp;
         temp.a = a+c.a;
         temp.b = b+c.b;
         return temp;
     }

     Complex operator-(Complex c)
     {
         Complex temp;
         temp.a = a-c.a;
         temp.b = b-c.b;
         return temp;
     }

     Complex operator*(Complex c)
     {
         Complex temp;
         temp.a = a*c.a;
         temp.b = b*c.b;
         return temp;
     }

     Complex operator==(Complex c)
     {
         Complex temp;
         temp.a = a==c.a;
         temp.b = b==c.b;
         return temp;
     }

 };
 int main()
 {
     Complex c1,c2,c3,c4,c5,c6;
     c1.setData(3,4);
     c2.setData(5,6);
     c1.showData();
     c2.showData();
     c3 = c1+c2;
     c3.showData();
     c4 = c1-c2;
     c4.showData();
     c5 = c1*c2;
     c5.showData();
     c5 = c1==c2;
     c5.showData();
 }