
// program to check whether the given number is divisible by 7 or not...

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;

    if(n%7 == 0)
    cout<<"yes it is divisible by 7";
    else
    cout<<"Not divisible by 7";
}