#include <stdio.h>

void printReverse(int n)
{
  if (n > 0)
    {
    printf("%d ", n);
    printReverse(n-1);
    }
}

int main()
{
  int n = 5;

  printReverse(n);
  return 0;
}
