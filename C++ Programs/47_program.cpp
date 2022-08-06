#include <iostream>
#include <conio.h>
using namespace std;
class Box
{
private:
    int lenght, breadth, height;

public:
    void showDimensions() { cout << "lenght =  " << lenght << " Breadth =  " << breadth << " height =  " << height << endl; }

    Box()
    {
        lenght = 0;
        breadth = 0;
        height = 0;
    }

    Box(int m, int n, int o)
    {
        lenght = m;
        breadth = n;
        height = o;
    }

    Box(Box &z)
    {
        lenght = z.lenght;
        breadth = z.breadth;
        height = z.height;
    }
};

int main()
{
    Box c1,c2(12, 13, 11);
    Box c3=c2;
    c1.showDimensions();
    c2.showDimensions();
    c3.showDimensions();
}