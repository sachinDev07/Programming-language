
// Practicing list functions.....

#include <iostream>
#include <list>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    list<int> l;
    l.push_back(22);
    l.push_back(33);
    // l.push_front(11);
    // l.push_front(977);

    // l.front(11);

    list<int>::iterator it = l.begin();
    it++;
    l.insert(it, 998);
    l.insert(it, {999, 991, 992, 993,999});
    l.push_back(22);

    l.pop_back();
    l.pop_back();
    l.pop_front();
    l.reverse();
    l.reverse();
    l.sort();
    // l.unique();
    l.remove(999);

    for (auto num : l)
        cout << num << " ";
    cout << endl;
}