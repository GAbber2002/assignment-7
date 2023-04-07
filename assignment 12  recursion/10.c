#include <stdio.h>

void printReverse(int n)
{
  if (n != 0)
    {
    printf("%d", n % 10);
    printReverse(n/10);
    }
}

int main() {
  int number = 12345;
  printf("Reverse of %d is: ", number);
  printReverse(number);
  printf("\n");
  return 0;
}
