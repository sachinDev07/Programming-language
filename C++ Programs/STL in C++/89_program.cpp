// priority queue...
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    system("cls");
    priority_queue<int> max;

    priority_queue<int,vector<int>,greater<int>>min;

    max.push(1);
    max.push(2);
    max.push(3);
    max.push(4);
    max.push(5);

    cout << "size = " << max.size()<<endl;


    for(int i =0;i<n;i++)
    cout<<max.top();
    cout<<max.top()<<" ";
    max.pop();
    cout<<endl;


}