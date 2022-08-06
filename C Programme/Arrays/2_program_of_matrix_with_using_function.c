#include <conio.h>
#include <stdio.h>
#define row 3
#define col 4

void printArray(int cat[row][col]);
void main()
{
    int mat[row][col];
    printf("Enter the elements of array \n");

    printArray(mat);
    
    // return 0;
}
void printArray(int cat[row][col])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &cat[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d  ", cat[i][j]);
        }
        printf("\n");
    }
}