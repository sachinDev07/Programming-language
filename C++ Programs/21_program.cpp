// Program to print first N even natural numbers....

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,x=1;
    cout<<"Enter any number"<<endl;
    cin>>n;

    cout<<"The first "<<n<<" even natural numbers are :"<<endl; 
    for(x;x<=n;x++)
    {
        if(x%2==0)
        cout<<x<<endl;
    }
}