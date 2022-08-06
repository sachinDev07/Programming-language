
// create a vector for int type values and store any 4 
//  numbers in it. Print square of elements using range for loop...

#include<iostream>
#include<vector>
#include<conio.h>
 using namespace std;

 int main()
 {
     system("cls");
     vector <int> v;

     v.insert(v.begin(),{11,22,33,44});

     for(auto num:v)
      cout<<num*num<<" ";
      cout<<endl;
 }