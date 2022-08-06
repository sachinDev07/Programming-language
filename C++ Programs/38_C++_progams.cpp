// Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number,also define instance member functions to set values of complex number and print values of complex number.

#include<iostream>
#include<conio.h>
 using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    void setdata( int x ,int y)
    {
        a = x;
        b = y;
    }

    void showdata()
    {
        cout<<" a = "<< a <<" b = "<< b <<endl ;
     
    }

    Complex add(Complex X )
    {
       Complex temp;
       temp.a = a + X.a;   
       temp.b = b + X.b;
       return temp;
    }
};

int main()
{
    Complex c1 , c2 ,c3;
    c1.setdata(7,11);
    c2.setdata(55,45);
    c1.showdata();
    c2.showdata();

    c3 = c1.add(c2);
    c3.showdata();
}