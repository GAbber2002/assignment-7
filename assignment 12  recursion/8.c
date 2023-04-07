#include <stdio.h>

void printBinary(int n)
{
  if (n > 1)
    {
    printBinary(n/2);
    }
  printf("%d", n % 2);
}

int main()
{
  int decimal = 15;
  printf("Binary representation of %d is: ", decimal);
  printBinary(decimal);
  printf("\n");
  return 0;
}
