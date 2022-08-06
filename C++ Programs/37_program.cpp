
// Program to find HCF of two numbers...

#include <iostream>
#include <conio.h>
 using namespace std;

int main()
{
    int a , b ;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    a>b?a:b;
    for(int i=a; i<=a; i--)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<i;
            break;
        }
    }
}