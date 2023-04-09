
#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a; // p is a pointer to int, initialized to the address of a
    printf("The value of a is %d\n", a); // output: The value of a is 5
    printf("The value of p is %p\n", p); // output: The value of p is <address of a>
    printf("The value of *p is %d\n", *p); // output: The value of *p is 5
    *p = 10; // assign 10 to the value pointed to by p
    printf("The value of a is now %d\n", a); // output: The value of a is now 10
    return 0;
}
