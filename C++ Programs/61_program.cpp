// Write a program to find the greatest of two given numbers in two different classes using friend function..
#include <iostream>
#include <conio.h>
using namespace std;
class classB;
class classA
{
    private:
         int a;
    public:
    void setdata()
    {
        cout << "Enter first number: " << endl;
        cin >> a;
    }
    friend void max(classA,classB);
};

class classB
{
    private:
        int b;
        public:
    void setdata()
    {
        cout << "Enter second number: " << endl;
        cin >> b;
    }
    friend void max(classA,classB);
};

void max(classA a1,classB b1)
{
    cout<<"Greater is : "<< a1.a > b1.b ? a1.a : b1.b;

    // if(a1.a>b1.b)
    // cout<<"Greater is : "<<a1.a;
    // else
    // cout<<"Greater is : "<<b1.b;
}

int main()
{
    classA a1;
    classB b1;
    a1.setdata();
    b1.setdata();
    max(a1,b1);
}