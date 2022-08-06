// Program to print N natural numbers.....

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,x=1;
    cout<<"Enter any number"<<endl;
    cin>>n;

    cout<<"Natural number from 1 to "<<n<<" are :"<<endl;
    while( x <= n)
    {
        cout<<x<<endl;
        x++ ;
    }
}