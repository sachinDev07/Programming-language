
// program to check wether the given number is positive,negative or zero....

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;

    if(n>0)
    cout<<"Number is positive";
    else if(n==0)
    cout<<"Number is zero";
    else
    cout<<"Number is negative";
}
