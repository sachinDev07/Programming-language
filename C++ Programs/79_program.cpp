#include<iostream>
#include<vector>
#include<conio.h>
 using namespace std;

 int main()
 {
     system("cls");
     vector<vector<int>> vec;
     vector<int> v1={1,2,3};
     vector<int> v2={11,22,33};
     vector<int> v3={111,222,333};

     vec.push_back(v1);
     vec.insert(vec.end(),{v2,v3});

     vector<vector<int>>::iterator it;
     for(it=vec.begin();it!=vec.end();it++)
     {
         for(auto x:*it)
          cout<<x<<" ";
          cout<<endl;
     }

 }