#include<iostream>
#include<conio.h>
 using namespace std;

int fun(int x,int y);
int fun(int x);
// int fun(int x);
int fun(int xx ,int yy );
int main()
{
    int a,b;
    cout<<"Enter two numbers for addition"<<endl;
    cin>>a>>b;
    cout<<"Addition of two numbers is "<<fun(a,b)<<endl;

    int year;
    cout<<"Enter a year "<<endl;
    cin>>year;
    cout<<""<<fun(year);
    
    
    // int c;
    // cout<<"Enter any number: "<<endl;
    // cin>>c;
    // if(c%2==0)
    // cout<<"Number is even"<<fun(c)<<endl;
    // else
    // cout<<"Number is odd"<<fun(c)<<endl;

    int l,br;
    cout<<"Enter lenght and breadth of the rectangle"<<endl;
    cin>>l>>br;
   float areaa;
    cout<<"Area of rectangle is: "<<fun(areaa)<<endl;

}

int fun(int x,int y)
{ 
    return x+y;
}

int fun(int x)
{ 
    if(x%4==0 || x%100!=0 || x%400==0)
    return 1;
    else
    return 0;
}
// int fun(int x){ return x;}

int fun(int xx,int yy)
{ 
   int area;
   area = xx*yy;
   return area;
}