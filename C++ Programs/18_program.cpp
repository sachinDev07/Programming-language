// Program to check wether given number is a digit,lowercase alphabet ,uppercase alphabet or a special character.....       

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
                cout << " It is  lowercase alphabet  " ;
            }
            
            if (char1 == Alp && alp == Alp + 32)
            {
                temp = alp - 32;
                cout << "It is uppercase alphabet";
            }
          
           
        }
        
    }
            // if(char1 <= 0 || char1 >= 0)
            // cout<<"it is number digit";
            // else
            // cout<<"It is special symbol";  
}