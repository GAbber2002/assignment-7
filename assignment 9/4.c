#include <stdio.h>

int main() {
    char choice;
    float a, b, c;

    do {
        printf("\n");
        printf("Menu\n");
        printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("c. Check whether a given set of three numbers are lengths of an equilateral triangle or not\n");
        printf("d. Exit\n");
        printf("Enter your choice (a-d): ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter three numbers: ");
                scanf("%f %f %f", &a, &b, &c);
                if ((a == b && a != c) || (b == c && b != a) || (c == a && c != b)) {
                    printf("The given set of three numbers are lengths of an isosceles triangle\n");
                } else {
                    printf("The given set of three numbers are not lengths of an isosceles triangle\n");
                }
                break;
            case 'b':
                printf("Enter three numbers: ");
                scanf("%f %f %f", &a, &b, &c);
                if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) {
                    printf("The given set of three numbers are lengths of a right angled triangle\n");
                } else {
                    printf("The given set of three numbers are not lengths of a right angled triangle\n");
                }
                break;
            case 'c':
                printf("Enter three numbers: ");
                scanf("%f %f %f", &a, &b, &c);
                if (a == b && b == c) {
                    printf("The given set of three numbers are lengths of an equilateral triangle\n");
                } else {
                    printf("The given set of three numbers are not lengths of an equilateral triangle\n");
                }
                break;
            case 'd':
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please enter a-d.\n");
                break;
        }
    } while (choice != 'd');

    return 0;
}

