#include<iostream>
 using namespace std;
  
  class ClassA1
  {
      protected:
       int rollno;
       int marks[5];
       int i,sum=0;
       public:
       void detail()
       {
           cout<<"Enter the rollno of student"<<endl;
           cin>>rollno;

           cout<<"Enter the marks of five subjects"<<endl;
           for(int i = 0; i < 5; i++)
           {
                 cin>>marks[i];
           }
          

           for(int i = 0; i < 5; i++)
            {
                sum = sum + marks[i];
            }

       }
       

  };

  class ClassA2
  {
      protected:
       int sportMark;
       public:
       void s_detail()
       {
           cout<<"Enter the sports marks"<<endl;
           cin>>sportMark;
       }

  };

  class Childclass: public ClassA1, public ClassA2
  {
    //   private:
       int tot,avg;
       public:
       void display()
       {
           tot = sum + sportMark;
           avg = tot/6;
           cout<<"Roll no : "<< rollno<<"\nTotal : "<< tot<<endl;
           cout<<"Average marks: "<< avg<<endl;
       }

       

  };

  int main()
  {
    //   ClassA1 a1;
    //   ClassA2 a2;
      Childclass c1;
      c1.detail();
      c1.s_detail();
      c1.display();
      
  }