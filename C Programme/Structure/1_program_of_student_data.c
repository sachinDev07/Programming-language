#include <conio.h>
#include <stdio.h>

struct student
{
    char name[40];
    int rollno;
    int marks;
};
struct student inputStudentdata();
void abc(struct student s);
int main()
{
    struct student s1;
    s1 = inputStudentdata();
   abc(s1);
}
struct student inputStudentdata()
{
    struct student s;
    printf("Enter name , roll no and marks of student\n");
    gets(s.name);
    scanf("%d", &s.rollno);
    scanf("%d", &s.marks);
    return (s);
}
void abc(struct student s)
{
    printf("\nname= %s", s.name);
    printf("\nrollno= %d", s.rollno);
    printf("\nmarks= %d", s.marks);
}
