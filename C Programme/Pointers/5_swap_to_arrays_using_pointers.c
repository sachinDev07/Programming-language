#include <conio.h>
#include <stdio.h>
int main()
{
    int arr[10], brr[10];
    int i;
    printf("Enter first array \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 10; i++)
        printf("%d", arr[i]);

         printf("\nEnter second array\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &brr[i]);
    for (i = 0; i < 10; i++)
        printf("%d", brr[i]);
}
int swap(int *arr[10], int *brr[10])
{
    int j,temp;
    temp=*arr[j];
    *arr[j]= *brr[j];
    

}