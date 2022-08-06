#include<conio.h>
#include<stdio.h>
#include<string.h>
 #define MAX_SIZE 100
int main()
{
    int l;
    char abc[MAX_SIZE];
    printf("enter the string name\n");
    //  scanf("%s",abc);
    gets(abc);

    l=strlen(abc);
    printf("lenght of string is %d",l);
}