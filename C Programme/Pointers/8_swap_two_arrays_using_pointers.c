#include <conio.h>
#include <stdio.h>
int main()
{
  int arr1[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int arr2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int *ptr1 = arr1;
  int **ptr2 = &ptr1;

  printf("Now array1 is ");
  for (int i = 0; i < 10; i++)
  {
     arr1[i] = arr2[i];
      printf("%d ", arr1[i]);
  }

  printf("\nNow array2 is ");
  for (int i = 0; i < 10; i++)
  {
      printf("%d ", **ptr2 + i);
  }
  return 0;
}