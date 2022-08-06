
// practicing forward_list ... //
#include <iostream>
#include <conio.h>
#include <forward_list>
 using namespace std;

int main()
{
    system("cls");

    forward_list<int> f1;
    f1.push_front(10);
    f1.emplace_front(20);
    f1.emplace_after(f1.begin(), 30);
 
    int element = 22;
    
     auto it_new = f1.begin();
     it_new = f1.insert_after(it_new, element);
    for (auto it = f1.cbegin(); it != f1.cend(); it++) {
        cout << *it << " ";
    }
    it_new++;
    
  
    
    // for (auto x : f1)
    //     cout << x << " ";
    cout << endl;
}