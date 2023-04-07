#include <stdio.h>

void printReverseOddNumbers(int n, int current)
{
  if (n > 0)
    {
    if (current % 2 != 0)
    {
      printf("%d ", current);
      printReverseOddNumbers(n-1, current-2);
    }
    else
    {
      printReverseOddNumbers(n, current-1);
    }
  }
}

int main()
{
  int n = 5;
  int startingNumber = (n*2)-1;
  printReverseOddNumbers(n, startingNumber);
  return 0;
}
