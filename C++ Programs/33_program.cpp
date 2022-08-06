
// Write a function to calculate area of a circle.....

#include<iostream>
#include<conio.h>
using namespace std;

float areaOfCircle(int a)
{
   float area1 ;
   area1 = 3.14*a*a;
   return area1;
}
int main()
{
    int r = 4 ;
    float area;
    
    // area=areaOfCircle(r);
    cout<<"Area of circle is "<<areaOfCircle(r);
}
