#include <stdio.h>
#include <conio.h>
// void input(int x[], int size);
void input(int x[], int size)
{
    int i;
    printf("Enter %d numbers\n",size);
    for (i = 0; i < size; i++)
        scanf("%d", &x[i]);

    for (i = 0; i < size; i++)
        printf("%d ", x[i]);
}

int main()
{
    int a[10];
    input(a,10);
    // sort(a,10);
    // display(a,10);
}

//  void sort(int b[],int size)
//  {
//     int i;

//  }