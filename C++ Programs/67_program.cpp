#include<iostream>
 using namespace std;

 template <class T>
 class Bigger
 {
     private:
      T a;
      T b;
     public:
      Bigger(T x , T y)
      {
          if(x>y)
          cout<<x<<" is greater"<<endl;
          else
          cout<<y<<" is greater"<<endl;
       
      }

      ~Bigger()
      {
          cout<<"bye..."<<endl;
      }
 };

 int main()
 {
     template <class T>
     Bigger  <T> s1();

     int choice;
     int a,b;
     cout<<"Enter your choice"<<endl;
     cout<<"Press 1: For integer values"<<endl;
     cout<<"Press 2: For float values"<<endl;
     cout<<"Press 3: For double values"<<endl;
     cin>>choice;
     switch(choice)
     {
         case 1:
         cout<<"Enter two integer numbers";
         cin>>a>>b;
         break;
         case 2:
         cout<<"Enter two float numbers";
         cin>>a>>b;
         break;
         case 3:
         cout<<"Enter two double numbers";
         cin>>a>>b;
         break;
         default:
         cout<<"Enter a valid number";
         
     }
     
 }