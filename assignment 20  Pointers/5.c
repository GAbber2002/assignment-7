#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    int *p1 = &a, *p2 = &b; // p1 points to a, p2 points to b
    if (*p1 > *p2)
    {
        printf("The maximum number is %d\n", *p1);
    }
     else
     {
        printf("The maximum number is %d\n", *p2);
    }
    return 0;
}



