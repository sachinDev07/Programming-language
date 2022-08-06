//  Array in stl...
#include <iostream>
#include <array>
using namespace std;

int main()
{
    system("cls");
    array<int, 5> a = {10, 33, 32, 23, 44};
    cout << "position at second postion = " << a[2] << endl;

    int size = a.size();
    cout << "size of an array is = " << size;

    int max = a.max_size();
    cout << "\nmax size of array is = " << max;

    array<int, 5> b;

    int swap = b.swap(a);
    cout << "the swapping of numbers" << b.swap;
}