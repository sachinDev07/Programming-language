#include <stdio.h>
#include <conio.h>
int main()
{
    int mat1[3][3], i, j, mat2[3][3], mat3[3][3];
    printf("Enter numbers for first martrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &mat1[i][j]);
    }

    // printf("\tYour first matrix is\n");
    // for (i = 0; i <= 2; i++)
    // {
    //     for (j = 0; j <= 2; j++)
    //         printf("\t%d  ", mat1[i][j]);
    //     printf("\n");
    // }

    printf("Enter numbers for second martrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &mat2[i][j]);
    }
    // printf("\tYour second matrix is\n");
    // for (i = 0; i <= 2; i++)
    // {
    //     for (j = 0; j <= 2; j++)
    //         printf("\t%d  ", mat2[i][j]);
    //     printf("\n");
    // }

        printf("Sum of two matrices is\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("\t%d", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}