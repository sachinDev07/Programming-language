
// check whether the year is leap year or not.....

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a year"<<endl;
    cin>>year;

    if(year%4==0 || year%100!=0 || year%400==0)
    cout<<"Yes it is a leap year";
    else
    cout<<"It is not a leap year";
}