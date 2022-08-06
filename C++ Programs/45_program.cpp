#include<iostream>
#include<conio.h>
 using namespace std;
 class Complex
 {
     private:
     int a,b,c;
     public:
     void showDimensions(){ cout<<" "<<a<<" "<<b<<" "<<c<<endl;}

     Complex()
     {   
         a = 0; 
         b = 0; 
         c = 0;
     }

     Complex(int m,int n,int o)
     {
         a = m;
         b = n;
         c = o;
     }
     
     Complex ( Complex &z)
     {
         a = z.a;
         b = z.b;
         c = z.c;
     }
 };

 int main()
 {
     Complex c1,c2(12,13,11);
     Complex c4=c2;
     c1.showDimensions();
     c2.showDimensions();
     c4.showDimensions();
 }