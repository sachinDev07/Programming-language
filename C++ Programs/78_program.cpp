#include<conio.h>
#include<vector>
#include<iostream>
 using namespace std;

 int main()
 {
     system("cls");

     vector <int> v1,v2;
     vector <int>::iterator it;
    
     v1.push_back(10);
     v1.insert(v1.begin(),20);
     v1.insert(v1.begin()+1,4,30);

     int a=11,b=12,c=13;
     v1.insert(v1.begin()+2,{a,b,c});

     for(auto num:v1)
      cout<<num<<" ";
      cout<<endl;

    for(it=v1.begin();it!=v1.end();it++)
     cout<<*it<<" ";
     cout<<endl;

     v2.insert(v2.begin(),v1.rbegin(),v1.rbegin()+5);
      for(auto num:v2)
      cout<<num<<" ";
      cout<<endl;

     v2.erase(v2.begin()+1);
     for(auto num:v2)
      cout<<num<<" ";
      cout<<endl;

      v1.erase(v1.begin()+3,v1.begin()+6);
      for(auto num:v1)
      cout<<num<<" ";
      cout<<endl;

 }