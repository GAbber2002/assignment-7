#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Convert the even number to its upper nearest odd number
    switch (num % 2) {
        case 0:
            num++;
            printf("Upper nearest odd number: %d\n", num);
            break;
        default:
            printf("%d is not an even number.\n", num);
            break;
    }

    return 0;
}

