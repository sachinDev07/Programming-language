
//  Write a program to check whether the triangle is right angle triangle or not.Takes 
//  length of sides from the user...  

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int h,l,b;
    cout<<"Enter hypotenues, lenght and breadth of the triangle"<<endl;
    cin>>h>>l>>b;
    
    if(h*h == l*l+b*b)
    cout<<"Yes it is right angled triangle";
    else
    cout<<"It not right angled triangle";
}