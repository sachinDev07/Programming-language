
// Program to check wether a given number is prime or not.....

#include <iostream>
#include <conio.h>
using namespace std;
      
int main()
{
    int n ,i ;
    cout<<"Enter any number"<<endl;
    cin>>n;

    for(  i=2 ; i<n ;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    cout<<n;
    else
    cout<<n;
}