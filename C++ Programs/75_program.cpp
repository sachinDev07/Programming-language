
// practising of vectors.....

#include <conio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> v;
    v.push_back(33);
    v.push_back(66);
    v.push_back(77);

    v.insert(v.begin() + 1,{44,55,56,77,88,100});

    for (auto num : v)
        cout << num << " ";
    cout << endl;
}
