#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("\tenter number for table\n ");
    scanf("%d",&n);

    for ( i = 1; i <=10; i++)
    {
        printf("\t%d * %d = %d\n",n,i,n*i);
    }
    
}