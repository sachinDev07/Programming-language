#include<iostream>
#include<conio.h>
 using namespace std;

 class Person
 {
     private:
          char name;
          int age;
     public:
          void setName(){ }
          void getName(){ }
          void setAge(){ }
          void getAge(){}

 };

 class Employee:public Person
 {
     private:
          int empid;
          int salary;
     public:
          setEmployeeData(){}
          showEmployeeData(){}
          counEmployee(){}

 }