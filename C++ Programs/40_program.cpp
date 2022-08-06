// Define a class Box to represent a cuboid. Declare instance member variables to store dimensions of the Box and also define instance member functions to set dimensions of the box and display dimensions of the Box. Define one more instance member function which returns the volume of caller object of Box.

#include <iostream>
#include <conio.h>
using namespace std;

class Box
{
private:
    int l, w, h;

public:
    void setData(int x, int y, int z){l = x;w = y;h = z;}

    void showData(){
        cout << "lenght = " << l <<endl<<"weight = " <<w<<endl<<"height = " <<h<<endl;
    }

    int volume(){return l * w * h;}
};

int main()
{
    Box b1,b2;
    b1.setData(7, 4, 5);
    b1.showData();
    cout<<"  Volume of Cuboid is "<<b1.volume();
}