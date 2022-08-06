#include<iostream>
#include<conio.h>
 using namespace std;

 template<class X>
X big(X a,X b)
{
    if(a>b)
     return a;
     else
     return b;
}

int main()
{
    cout<<big(77.6,44.4);

    
}