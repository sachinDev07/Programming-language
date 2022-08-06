
// Write a program which takes a character from the user and display its ASCII code.....

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char char1, alp;
    int temp;
    cout << "Enter a character ";
    cin >> char1;

    for (int alp = 'a'; alp <= 'z'; alp++)
    {

        for (int Alp = 'A'; Alp <= 'Z'; Alp++)
        {
            if (char1 == alp && alp == Alp + 32)
            {
                temp = Alp + 32;
                cout << "ASCII code of  " << char1 << " is  " << temp;
            }
            if (char1 == Alp && alp == Alp + 32)
            {
                temp = alp - 32;
                cout << "ASCII code of  " << char1 << " is  " << temp;
            }
        }
    }
}