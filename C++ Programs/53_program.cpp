#include<iostream>
#include<conio.h>
 using namespace std;

 int sum(int,int);
 float sum(float x,float y);
 int main()
 {
     int a,b;
     cout<<"Enter two integer values for addition"<<endl;
     cin>>a>>b;
     cout<<"Sum of two integer values is : "<<sum(a,b)<<endl;

     float m,n;
     cout<<"Enter two decimal values for addition"<<endl;
     cin>>m>>n;
     cout<<"Sum of two decimal values is : "<<sum(m,n)<<endl;

 }

 int sum(int x,int y){return x+y;}
  float sum(float x,float y){return x+y;}