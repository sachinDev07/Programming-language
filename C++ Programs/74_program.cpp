#include <conio.h>
#include <array>
#include <iostream>
using namespace std;

class Complex
{
private:
    int a,b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;
    }
    int getReal() { return a; }
    int getImaginary() { return b; }
};
int main()
{
    system("cls");
    array<Complex, 3> a1;
    Complex c1, c2, c3, c4;
    c1.setData(2,3);
    c2.setData(4,5);
    c3.setData(6,7);
    a1[0] = c1;
    a1[1] = c2;
    a1[2] = c3;
    c4 = a1[0]+a1[1]+a1[2];
    //  cout<<c4;
    // c5 = c1+c2;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

    cout << "Real part=" << c4.getReal()<<endl;
    cout << "Imaginary part=" << c4.getImaginary()<<endl;

    cout << ".............................................................."<<endl;
    for (auto it = a1.rbegin(); it != a1.rend(); it++)
        cout << "REAL= " << it->getReal() << "  IMAGI=" << it->getImaginary()<<endl;
}