#include<iostream>
#include<conio.h>
 using namespace std;
 class Complex
 {
     private:
     int a,b;
     public:
     void setdata(int x,int y){a=x; b=y;}
     Complex operator+(Complex C)
     {
         Complex temp;
         temp.a = a + C.a;
         temp.b = b + C.b;
         return temp;
     }

     Complex operator-(Complex C)
     {
         Complex temp;
         temp.a = a - C.a;
         temp.b = b - C.b;
         return temp;
     }

     Complex operator*(Complex C)
     {
         Complex temp;
         temp.a = a * C.a;
         temp.b = b * C.b;
         return temp;
     }

     Complex operator==(Complex C)
     {
         Complex temp;
         temp.a = a == C.a;
         temp.b = b == C.b;
         return temp;

     }
     void showdata(){cout<<"a="<<a <<" b="<<b<<endl;}

 };
 int main()
 {
     Complex c1,c2,c3,c4,c5,c6;
     system("cls");
     c1.setdata(3,4);
     c2.setdata(5,4);
     c3 = c1+(c2);  
     c4 = c1-(c2);  
     c5 = c1*(c2);  
     c6 = c1==(c2);  
     c1.showdata();
     c2.showdata();
     c3.showdata();
     c4.showdata();
     c5.showdata();
     c6.showdata();
 }