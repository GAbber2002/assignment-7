#include <stdio.h>

void printEvenNumbers(int n, int current)
{
  if (n > 0)
    {
    if (current % 2 == 0)
    {
      printf("%d ", current);
      printEvenNumbers(n-1, current+2);
    }
    else
    {
      printEvenNumbers(n, current+1);
    }
  }
}

int main()
{
  int n = 5;
  printEvenNumbers(n, 2);
  return 0;
}
