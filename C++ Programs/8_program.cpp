
// Program to swap values of two int variables.....
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two values ";
    cin>>a>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swapping a = "<<a<<" and b = "<<b;
}