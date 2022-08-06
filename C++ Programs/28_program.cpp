
// Program to calculate sum of digits in given number.....

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num , rem ,sum=0;
    cout<<"Enter any digit"<<endl;
    cin>>num;

    while (num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"Sum of digit is "<<sum;
}