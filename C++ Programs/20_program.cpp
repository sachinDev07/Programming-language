// Program to print N natural numbers in reverse order.....

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;

    cout<<"Natural number from  "<<n<<" in reverse order are :"<<endl;
    while( n!=0)
    {
        cout<<n<<endl;
        n-- ;
    }
}