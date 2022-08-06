#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
using namespace std;

void writeText(char text[])
{
    ofstream fout;
    fout.open("file7.text", ios::app);
    fout << text;
    fout.close();
}

void readText()
{
    char ch;
    ifstream fin;
    fin.open("file7.text",ios::in);
    if(!fin)
    {
        cout<<"File Not Found";
    }
    else
    {
        ch = fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch = fin.get();
        } 
        fin.close();
    }
}

int main()
{
    
    writeText("\nHow are you ....");
    readText();
}