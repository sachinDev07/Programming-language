#include <conio.h>
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, num, found, size;
    printf("Enter the size of array \n");
    scanf("%d", &size);

    printf("Enter the array elemnents...");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter a element of array which you want to search\n");
    scanf("%d", &num);

    for (i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("%d is found at the position of %d ", num, i + 1);
    else
        printf("Invalid choice");
}