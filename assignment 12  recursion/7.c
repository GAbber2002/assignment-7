#include <stdio.h>

void printSquares(int n, int current)
{
  if (n > 0)
    {
    printf("%d ", current*current);
    printSquares(n-1, current+1);
  }
}

int main()
{
  int n = 5;
  printSquares(n, 1);
  return 0;
}
