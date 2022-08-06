// Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.
#include <conio.h>
#include <stdio.h>
// struct student input();

struct student
{
    char name[5];
    int rollno;
    int age;
   
};
int main()
{
    struct student a[5];
     int i;
		
		printf("\tRecord of 5 Students");
    for (i = 0; i <= 4; i++)
    {
        printf("\nEnter  student rollno\n");
        scanf("%d", &a[i].rollno);
        fflush(stdin);
        printf("Enter student name:\n");
        gets(a[i].name);
        printf("Enter student age\n");
        scanf("%d", &a[i].age);
    }
     printf("\n");
     printf("\tStudent Data");
     printf("\nRollno  Name  Age:\n");
    for (i = 0; i <= 4; i++)
    {
        printf(" %d     %s     %d", a[i].rollno, a[i].name, a[i].age);
        printf("\n");
    }
}

