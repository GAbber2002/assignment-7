#include <stdio.h>

int main()
{
   int matrix[3][3];
   int row_sum[3] = {0}, col_sum[3] = {0};
   int i, j;

   printf("Enter the elements of the matrix:\n");
   for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &matrix[i][j]);
      }
   }

   for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
         row_sum[i] += matrix[i][j];
         col_sum[j] += matrix[i][j];
      }
   }

   printf("\nSum of rows:\n");
   for (i = 0; i < 3; i++)
    {
      printf("Row %d: %d\n", i+1, row_sum[i]);
   }

   printf("\nSum of columns:\n");
   for (i = 0; i < 3; i++)
    {
      printf("Column %d: %d\n", i+1, col_sum[i]);
   }

   return 0;
}
