#include <stdio.h>

int main() {
    float a, b, c, disc, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = b * b - 4 * a * c;

    switch (disc > 0) {
        case 1:
            root1 = (-b + sqrt(disc)) / (2 * a);
            root2 = (-b - sqrt(disc)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);
            break;
        case 0:
            switch (disc == 0) {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    printf("Roots are real and same.\n");
                    printf("Root1 = Root2 = %.2f\n", root1);
                    break;
                default:
                    realPart = -b / (2 * a);
                    imagPart = sqrt(-disc) / (2 * a);
                    printf("Roots are complex and different.\n");
                    printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
                    break;
            }
            break;
    }

    return 0;
}

