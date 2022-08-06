#include<iostream>
#include<conio.h>
 using namespace std;

 class ABC
 {
     private:
       int rollNo;
       char name;
     public:
        void setdata(int x,char *y)
        {
            rollNo = x;
            name = *y;
        }
        void displaydata()
        {
            cout<<" "<<rollNo<<" "<<name;
        }
 };

 int main()
 {
     ABC a1,a2,a3;
     ABC *p;
     p->setdata(1,"sachin");
     p->displaydata();
 }
