#include<stdio.h>
#include<conio.h>
#include<string.h>
 
 struct Employee
 {
     int empId;
     char name[20];
     float sallary;
 };

 int main()
 {
    struct Employee b1 = {1,"Sonu",29999.9};
     printf("%d %s %.2f",b1.empId,b1.name,b1.sallary);

     struct Employee e1,e2;
     e1.empId = 2;
     strcpy(e1.name,"Rakesh Junjunwala");
     e1.sallary = 30999.50;
     printf("\n%d %s %.2f",e1.empId,e1.name,e1.sallary);

     printf("\nEnter employee id,name and sallary\n");
     scanf("%d",&e2.empId);
     fflush(stdin);
     gets(e2.name);
     scanf("%f",&e2.sallary);
     printf("\n%d %s %.2f",e2.empId,e2.name,e2.sallary);

 }