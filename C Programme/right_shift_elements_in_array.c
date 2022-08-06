#include <stdio.h>
#include <conio.h>
#define LEFT 0
#define RIGHT 1

void display_array(int a[], int s);
void rotate_array(int a[], int s, int dir, int shif_count);

void display_array(int a[], int s)
{
    int i;
    printf("\n");
    for (i = 0; i < s; i++)
        printf("%d ", a[i]);
}

void rotate_array(int a[], int s, int dir, int shift_count)
{
    int i;
    int temp;
    if (dir == RIGHT)
    {
        while (shift_count)
        {
            temp = a[s - 1];
            for (i = s - 1; i >= 1; i--)
            {
                a[i] = a[i - 1];
            }
            a[0] = temp;
            shift_count--;
        }
    }
    else
    {
        while (shift_count)
        {
            temp = a[0];
            for (i = 0; i < s - 2; i++)
            {
                a[i] = a[i + 1];
            }
            shift_count--;
        }
    }
}

int main()
{
    system("cls");
    int i, size, shift;

    printf("Enter the size of array :  ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of array :\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("\nHow many times want to shift elements :");
    scanf("%d", &shift);

    display_array(arr, size);
    rotate_array(arr, size, RIGHT, shift);
    display_array(arr, size);
}