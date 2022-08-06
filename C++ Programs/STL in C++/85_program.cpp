#include <iostream>
#include <deque>
using namespace std;

int main()
{
    system("cls");
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for (int n : d)
        cout << n << " ";
    cout << endl;

    // d.pop_back();
    for (int n : d)
        cout << n << " ";
    cout << endl;

    cout << "Print first index element-> " << d.at(1) << endl;

    cout << "Front = " << d.front() << endl;
    cout << "back = " << d.back() << endl;

    cout << "Empty or not = " << d.empty() << endl;

    cout << "before erase = " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase = " << d.size() << endl;

    for (int n : d)
        cout << n << " ";
}