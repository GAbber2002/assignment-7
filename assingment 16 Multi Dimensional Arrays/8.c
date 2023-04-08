#include <stdio.h>

int main()
{
   int matrix[3][3];
   int i, j;

   printf("Enter the elements of the matrix:\n");
   for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &matrix[i][j]);
      }
   }

   printf("\nUpper Triangular Matrix:\n");
   for (i = 0; i < 3; i++)
    {
      for (j = i; j < 3; j++)
      {
         printf("%d\t", matrix[i][j]);
      }
      printf("\n");
   }

   return 0;
}
