
// Program to print table of user's choice......

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,mul;
    cout<<"Enter the number"<<endl;
    cin>>n;

    cout<<"The table of "<<n<<" is :"<<endl;
    for(int i =1 ; i <= n ; i++)
    {
       mul = i*n;
       cout<<n<<"*"<<i<<"="<<mul<<endl;
    }
}