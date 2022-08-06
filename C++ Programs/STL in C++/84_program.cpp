// vector in c++...

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> v;
    cout << "capacity= " << v.capacity();

    v.push_back(1);
    cout << "\ncapacity= " << v.capacity();

    v.push_back(2);
    cout << "\ncapacity= " << v.capacity();

    v.push_back(3);
    cout << "\ncapacity= " << v.capacity() << endl;

    v.push_back(4);
    cout << "\ncapacity= " << v.capacity() << endl;

    v.push_back(5);
    cout << "\ncapacity= " << v.capacity() << endl;

    cout << "size = " << v.size() << endl;

    for (int num : v)
        cout << num << " " << endl;

    cout << "position at 3rd = " << v.at(3);

    cout << "\n front element = " << v.front();
    cout << "\n back element = " << v.back()<<endl;

    v.pop_back();

    for (int num : v)
        cout << num << " " << endl;

    cout<<"befor clear = "<<v.size()<<endl;
    v.clear();
    cout<<"after clear = "<<v.size()<<endl;
    cout<<"capacity of vector after = "<<v.size()<<endl;
    
}