#include <stdio.h>

void printReverseEvenNumbers(int n, int current) {
  if (n > 0) {
    if (current % 2 == 0) { // Check if the current number is even
      printf("%d ", current); // Print the current number
      printReverseEvenNumbers(n-1, current-2); // Recursively print the previous even number
    }
    else {
      printReverseEvenNumbers(n, current-1); // Skip the current odd number and move to the previous number
    }
  }
}

int main() {
  int n = 5; // Change this to the desired value of N
  int startingNumber = n*2; // Calculate the starting even number based on the value of N
  printReverseEvenNumbers(n, startingNumber);
  return 0;
}
