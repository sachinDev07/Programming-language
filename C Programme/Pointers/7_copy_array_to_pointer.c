#include<conio.h>
#include<stdio.h>
int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100 };
    int *ptr1 = arr ;
    int *ptr2 = ptr1;

    printf("Array 1 = ");
    for(int i=0 ; i<10 ;i++)
    {
    printf("%d ",*ptr1);
    ptr1++ ;
    }

    *ptr2 = *ptr1 ;

    printf("\nArray 2 = ");
    for(int i=0 ; i<10 ;i++)
    {
    printf("%d ",*ptr2);
    ptr2++ ;
    }
    return 0;
}
