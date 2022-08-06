   // create an array of int size 5. print all values in reverse order...
#include<conio.h>
#include<iostream>
#include<array>
 using namespace std;

 int main()
 {
     system("cls");
     array<int,5> a1 = {2,3,4,5,6,};
    

     for(auto it = a1.rbegin(); it != a1.rend(); it++)
      cout<<*it<<" ";
      cout<<endl;

     for(int num:a1)
     cout<<num<<" ";
     
 }