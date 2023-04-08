#include <stdio.h>

int main()
{
   int matrix[3][3], sum = 0;
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
      sum += matrix[i][i];
   }

   printf("\nSum of the left diagonals: %d\n", sum);

   return 0;
}
