#include <stdio.h>

void printNumbers(int n)
{
  if (n > 0)
    {
    printNumbers(n-1);
    printf("%d ", n);
    }
}

int main()
{
  int n = 5; // Change this to the desired value of N
  printNumbers(n);
  return 0;
}
