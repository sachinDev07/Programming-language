#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class Employee
{
private:
   int empid;
   char name[100];
   float salary;
public:
   void setEmployee(int id,char ename[],int sal)
   {
      empid = id ;
      name  = ename;
      salary= sal;
   }

   void showEmployee()
   {
      cout << "Employee id : " << empid << endl;
      cout << "Employee name : " << name << endl;
      cout << "Employee salary : " << salary << endl;
      cout<<endl;
   }

   void setEmpid(int x) {empid = x;}
   void setName(char n[]){strcpy(name,n);}
   void setSalary(float s){salary = s;}

   int getEmpid() {return empid;}
   char* getName(){return name;}
   float getSalary(){return salary;}

   int maxValue(int a[],int s)
   {

   }

   int avg(int a[],int s)
   {

   }

   int sum(int a[],int s)
   {

   }

   Employee getHighestSalary(Employee e[],int s);
};

 Employee Employee::getHighestSalary(Employee e[],int s)
{
   int i;
   Employee temp;
   temp = e[0];
   for(i=0;i<s;i++)
   {
      if(e[i] > temp)
        temp = e[i];
   }
   return temp;
}

int main()
{
   system("cls");

   Employee emp[30];
   int n,i;
   
   cout<<"Enter number of employees"<<endl;
   cin>>n;

   for(i=0;i<n;i++)
    emp[i].setEmployee();

   cout<<endl;
   cout<<"Employee Data : "<<endl;
   cout<<endl; 

   for(i=0;i<n;i++)
    emp[i].showEmployee();


} 