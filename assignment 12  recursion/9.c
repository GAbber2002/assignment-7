#include <stdio.h>

void printOctal(int n)
{
  if (n > 7)
    {
    printOctal(n/8);
    }
  printf("%d", n % 8);
}

int main()
{
  int decimal = 56;
  printf("Octal representation of %d is: ", decimal);
  printOctal(decimal);
  printf("\n");
  return 0;
}
