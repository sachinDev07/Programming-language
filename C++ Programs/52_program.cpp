
#include <iostream>
#include <conio.h>
using namespace std;
static float pi = 3.14;

class Operation
{
private:
    float r, l, b;
    int p, q, s;
    float x, y, z;

public:
    void area(int x)
    {r=x;cout<<"\nArea of Circle: "<<pi*r*r<<endl;}

    void area(int x,int y)
    {p=x;q=y;cout<<"\nArea of rectangle is: "<<p*q<<endl;}

    void sum(int x,int y)
    {p=x;q=y;cout<<"\nSum of two int values: "<<p+q<<endl;}

    void sum(float x, float y)
    {l=x;b=y;printf("Sum of two float values is: %.2f ",l+b);}

    void sum(double x, double y)
    {p=x;q=y;cout<<"\nSum of two double values is: "<<p+q<<endl;}
};

int main()
{
    Operation o1,o2,o3;
    o1.area(2);
    o1.area(5,3);
    o1.sum(2,3);
    float r,p;
    cout<<"Enter two float values: "<<endl;
    cin>>r>>p;
    o1.sum(r,p);
    cin.ignore();
}