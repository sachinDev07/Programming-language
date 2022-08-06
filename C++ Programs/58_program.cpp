#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata() { cout << "a = " << a << " b = " << b << endl; }
    Complex operator-()
    {
        Complex t;
        t.a = -a;
        t.b = -b;
        return t;
    }

    Complex operator++(int)
    {
        Complex C;
        C.a = a++;
        C.b = b++;
        return C;
    }

    Complex operator++()
    {
        Complex C;
        C.a = ++a;
        C.b = ++b;
        return C;
    }
};

int main()
{
    Complex c1, c2, c3, c4, c5;
    system("cls");
    c1.setdata(3, 4);
    c2.setdata(5, 6);
    c1.showdata();
    c2.showdata();
    c3 = -c1;
    c3.showdata();
    c3 = -c2;
    c3.showdata();
    c4 = c2++;
    c4.showdata();
    c2.showdata();
    c5 = ++c2;
    c5.showdata();
    c2.showdata();
    s
}