#include <iostream>
#include <conio.h>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

void reverseDeque(deque<int> &d);
vector<int> dequeToVector(deque<int> d);
int main()
{
    system("cls");
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_back(40);
    d1.push_back(50);

    d1.pop_front();

    d1.insert(d1.end(), 60);

    // 20 30 40 50 60 .....

    d1.insert(d1.begin()+2,35);
     
     for (auto it = d1.rbegin(); it != d1.rend(); ++it)
        cout << *it << " ";
        cout<<endl;
  
    
    vector<int> v = dequeToVector(d1);

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
        cout<<endl;

    // for (auto x : v)
    //     cout << x << " ";
    // cout << endl;
}