
// Practicing the list .....
#include <iostream>
#include <list>
#include <conio.h>
 using namespace std;

int main()
{
    system("cls");

    list <int> l1;
    l1.push_back(10);
    l1.push_front(20);

    list<int>::iterator it, t = l1.begin();
    t++;
    l1.insert(t, 30);
    l1.insert(t, {22, 43, 55});

    // 20 30 22 43 55 10

    for (auto x : l1)
        cout << x << " ";
    cout << endl;

    // for (auto x : l1)
    //     cout << x << " ";
    // cout << endl;

    // list<int>::iterator t2,t1 = l1.begin();
        
    // t2=l1.end();
    // l1.erase(t1,t2);

}