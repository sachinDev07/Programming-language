#include <iostream>
#include <conio.h>
using namespace std;

class Counter
{
private:
    int count;
public:
    Counter()
    {
        count++;
        cout << "\nno of objects = " << count;
    }

    ~Counter()
    {
        count++;
        cout << "\nno of objects deleted = " << count;
    }
};

int main()
{
     system("cls");
    Counter a1, a2, a3, a4, a5;
}