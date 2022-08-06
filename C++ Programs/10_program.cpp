
// Write a program to calculate simple interest 

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int p,t;
    float r;
    cout<<"Enter the principal , rate of interest and time"<<endl;
    cin>>p>>r>>t;

    float si = (p*r*t)/100;
    cout<<"your SI is "<<si;
}