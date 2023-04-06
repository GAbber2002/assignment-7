#include <stdio.h>

int main()
{
    char choice;
    float num1, num2, result;

    do
    {
        printf("\n");
        printf("Menu\n");
        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Exit\n");
        printf("Enter your choice (a-e): ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter two numbers to add: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 'b':
                printf("Enter two numbers to subtract: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 'c':
                printf("Enter two numbers to multiply: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 'd':
                printf("Enter two numbers to divide: ");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Cannot divide by zero\n");
                } else {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            case 'e':
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please enter a-e.\n");
                break;
        }
    } while (choice != 'e');

    return 0;
}

