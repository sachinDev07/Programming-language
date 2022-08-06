#include <conio.h>
#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[5];
    int age;
};

void displayage(struct student stu[], int i);
void evenstu(struct student stu[], int i);
void detailstu(struct student stu[], int i);

void displayage(struct student stu[], int n)
{
    printf("Name of students whose age is 14");
    for (int i = 0; i < n; i++)
    {
        if (stu[i].age == 14)
            printf("\nName: %s", stu[i].name);
    }
}

void evenstu(struct student stu[], int n)
{
    printf("\nThe student details whose rollno is even");
    for (int i = 0; i < n; i++)
    {
        if (stu[i].rollno % 2 == 0)
            printf("\nName: %s", stu[i].name);
    }
}

void detailstu(struct student stu[], int n)
{
    int a;
    printf("\nEnter the student's rollno to know its details : ");
    scanf("\n%d", &a);
    for (int i = 0; i < n; i++)
    {
        if (stu[i].rollno == a)
        {
            printf("\nName  :  %s ", stu[i].name);
            printf("\nage :  %d", stu[i].age);
        }
    }
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student stu[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent :%d\n", i + 1);
        printf("Enter student rollno :\n");
        scanf("%d", &stu[i].rollno);
        printf("Enter students name :\n ");
        scanf("%s", stu[i].name);
        printf("Enter students age :\n");
        scanf("%d", &stu[i].age);
    }

    displayage(stu, n);
    evenstu(stu, n);
    detailstu(stu, n);
}
