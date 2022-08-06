
// program to find greatest among three number;

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;

    cout<<(a>b?a>c?a:c :b>c?b:c)<<" is greater";
}