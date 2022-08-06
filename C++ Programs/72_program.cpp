#include<conio.h>
#include<iostream>
#include<array>
 using namespace std;

int main()
{
    system("cls");
    array<int,10> a1 = {1,2,3,4,5,6,7,8,9,0};
    array<int,10> a2 = {111,2,3,4,5,6,7,8,9,000};
    for(auto it = a1.begin();it!=a1.end();it++)
     cout<<*it<<" ";
     cout<<endl;

     int size = a1.size();
     cout<<"\nSize of array : "<<size;

     cout<<"\nPosition at 6 index : "<<a1.at(6);

     cout<<"\n Empty or not = "<<a1.empty();
     cout<<"\n First element = "<<a1.front();
     cout<<"\n Second element = "<<a1.back();
     cout<<"\n max size = "<<a1.max_size();

     cout<<" "<<a2.swap(a1);
}