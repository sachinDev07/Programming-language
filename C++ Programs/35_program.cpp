
// Write a funtion to check whether the given number is prime or not. Return 1 if prime otherwise return 0....

#include<iostream>
#include<conio.h>
using namespace std;

int primefun(int x)
{
    int i;
    for ( i = 2; i <= x; i++)
    {
        if(x%i==0)
        break;
    }
    if(i==x)
    return 1;
    else
    return 0;
}

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    cout<<primefun(n);
}