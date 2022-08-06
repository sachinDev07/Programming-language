// Write a program to read the class object of student info such as name,age, sex, 
//height and weight from the keyboard and to store them on a specifiedfile using read ()
// and write () functions. Again, the same file is opened for reading and displaying 
//the contents of the file on the screen

#include<fstream>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
 using namespace std;

 class Student_info
 {
     private:
     char name[30];
     int age;
     char sex;
     float height;
     float weight;
     public:
     void stuDetails()
     {
         cout<<"Enter the name of the Student: "<<endl;
         cin>>name;
         cout<<"Enter the age of the student: "<<endl;
         cin>>age;
         cout<<"Enter the gender of the student(M/F)"<<endl;
         cin>>sex;
         cout<<"Enter the height of the student: "<<endl;
         cin>>height;
         cout<<"Enter the weight of the student: "<<endl;
         cin>>weight;
     }
     void showDetails()
     {
         cout<<"\n"<<name<<" "<<age<<" "<<sex<<" "<<height<<" "<<weight;
     }

 };

int main()
{
    int n;
    k
}