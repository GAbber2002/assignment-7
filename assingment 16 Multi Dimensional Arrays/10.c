#include <stdio.h>


int main()
{
   int matrix[ROW][COL];
   int i, j, row, count, max_count = 0;

   printf("Enter the elements of the matrix (0s and 1s):\n");
   for (i = 0; i < ROW; i++)
    {
      for (j = 0; j < COL; j++)
      {
         scanf("%d", &matrix[i][j]);
      }
   }

   for (i = 0; i < ROW; i++)
    {
      count = 0;
      for (j = 0; j < COL; j++)
      {
         if (matrix[i][j] == 1)
         {
            count++;
         }
      }
      if (count > max_count)
      {
         max_count = count;
         row = i;
      }
   }

   printf("\nThe row with maximum number of 1s is: %d\n", row+1);

   return 0;
}

