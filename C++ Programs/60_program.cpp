#include <iostream>
#include <conio.h>
 using namespace std;

void swap(int &x,int &y)
{
    int temp;
    temp = x;
       x = y;
    y = temp;
    cout<<"\nAfter swapping:\n";
    cout<<"a = "<<x<<" \nb = "<<y;

}
int main()
{

    int a, b;
    cout<<"Enter two numbers for swapping\n";
    cin>>a>>b;
    cout<<"Before swapping:\n";
    cout<<"a = "<<a<<" \nb = "<<b;
    swap(a,b);
}