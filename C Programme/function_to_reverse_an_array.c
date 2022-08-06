#include <stdio.h>
#include <conio.h>

void display_fun(int a[],int s)
{
   int i;
     for(i=0;i<s;i++)
       printf("%d ",a[i]);
}

void reverse_fun(int a[],int s)
{
   int temp,i;
   printf("\nReverse of array is : \n");
    for (i = 0; i < s/2; i++)
     {
        temp = a[i];
        a[i] = a[s-i-1];
        a[s-i-1] = temp;
     }
}

int main()
{
   system("cls");

    int i,size;
    printf("Enter the size of array :  ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of array :\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    display_fun(arr,size);
    reverse_fun(arr,size);
    display_fun(arr,size);
   
}