
// Write a function to check whether a given number is even or odd. Return 1 if even other return 0

#include<iostream>
#include<conio.h>
using namespace std;

int evenOdd(int x)
{
    if(x%2==0)
    return 1;
    else
    return 0;
}

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    cout<<evenOdd(n);
}