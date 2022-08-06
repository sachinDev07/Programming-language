
#include <iostream>
#include <stdio.h>
#include <conio.h>
 using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setDate(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "-----------------------------------" << endl;
        cout << "\ta = " << a << " b = " << b << endl;
        cout << "-----------------------------------" << endl;
    }
    Complex add(Complex X)
    {
        Complex temp;
        temp.a = a + X.a;
        temp.b = b + X.b;
        return temp;
    }

    Complex sub(Complex X)
    {
        Complex temp;
        temp.a = a - X.a;
        temp.b = b - X.b;
        return temp;
    }

    Complex mul(Complex X)
    {
        Complex temp;
        temp.a = a * X.a;
        temp.b = b * X.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3, c4, c5;
    c1.setDate(3, 4);
    c2.setDate(5, 6);
    c1.showData();
    c2.showData();

    c3 = c1.add(c2);
    c4 = c1.sub(c2);
    c5 = c1.mul(c2);

    c3.showData();
    c4.showData();
    c5.showData();
}