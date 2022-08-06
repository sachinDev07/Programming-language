#include <iostream>
  using namespace std;

class Mammals
{
public:
    void printA()
    {
        cout << "I am mammal" << endl;
    }
};

class MarineAnimals
{
public:
    void printb()
    {
        cout << "I am a marine animal" << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void print()
    {
        cout << "I belong two both categories: Mammals as well as Marine animals" << endl;
    }
};

int main()
{
    Mammals m1, m2;
    MarineAnimals ma1, ma2;
    BlueWhale b1, b2;
    b1.printA();
    b1.printb();
    b1.print();
    b1.printA();
    b1.printb();
}