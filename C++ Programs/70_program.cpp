#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
 using namespace std;

 class Book
 {
     private:
     int bookid ;
     char title[20];
     float price;
     public:
     void setBook(int Id,char t[],float p)
     {
         bookid = Id;
         strcpy(title,t) ;
         price = p;
     }
     void showBook()
     {
         cout<<"\n"<<bookid<<" "<<title<<" "<<price;
     }
     void saveBook()
     {
         ofstream fout;
         fout.open("Bookfile.dat",ios::out);
         fout.write((char*)this,sizeof(*this));
         fout.close();
     }
     void showSaveBook()
     {
         Book temp;
         ifstream fin;
         fin.open("Bookfile.dat",ios::in);
         if(!fin)
         cout<<"File Not Found";
         else
         {
             fin.read((char*)&temp,sizeof(temp));
             while(!fin.eof())
             {
                 temp.showBook();
                 fin.read((char*)&temp,sizeof(temp));
             }
             fin.close();
         }
     }
 };

 int main()
 {
     system("cls");
     Book b;
     b.setBook(1,"C made easy",330.5);
     b.saveBook();

     b.setBook(2,"Python made easy",450.5);
     b.saveBook();

     b.setBook(3,"Javascript made easy",550.5);
     b.saveBook();

     b.setBook(4,"C++ made easy",650.5);
     b.saveBook();
     
     b.showSaveBook();
 }