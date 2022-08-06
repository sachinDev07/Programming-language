// Write a program to find average of 10 numbers.Use array to store 10 numbers
#include<conio.h>
#include<stdio.h>

int main()
{
    int a[10],sum=0;
    printf("Enter 10 numbrs : \n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<10;i++)
    sum = sum + a[i];
    // printf("%d",sum);
    float avg = sum/10.0;
    printf("Average of 10 numbers is : %f",avg);
}