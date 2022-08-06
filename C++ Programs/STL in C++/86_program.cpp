// practicing with deque...
#include <iostream>
#include <list>
using namespace std;

int main()
{
    system("cls");
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    list<int> newl(5, 7);
    cout << "Printing new list : " << endl;
    for (int n : newl)
        cout << n << " ";

    cout<<endl;

    for (int n : l)
        cout << n << " ";

    cout << endl;

    l.erase(l.begin());
    cout << "after erase = " << endl;
    for (int n : l)
        cout << n << " " << endl;

    cout << "size of list = " << l.size();
}