#include <stdio.h>

void printOddNumbers(int n, int current)
{
  if (n > 0)
   {
    if (current % 2 != 0)
        {
      printf("%d ", current);
      printOddNumbers(n-1, current+2);
        }
    else
    {
      printOddNumbers(n, current+1);
    }
  }
}

int main()
{
  int n = 5;
  printOddNumbers(n, 1);
  return 0;
}
