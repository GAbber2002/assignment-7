#include <stdio.h>


int main()
{
   int matrix[ROW][COL];
   int i, j, count = 0;

   printf("Enter the elements of the matrix:\n");
   for (i = 0; i < ROW; i++)
    {
      for (j = 0; j < COL; j++)
      {
         scanf("%d", &matrix[i][j]);
         if (matrix[i][j] == 0)
         {
            count++;
         }
      }
   }

   if (count > (ROW*COL)/2)
    {
      printf("\nThe given matrix is a sparse matrix.\n");
   }
   else
    {
      printf("\nThe given matrix is not a sparse matrix.\n");
   }

   return 0;
}
