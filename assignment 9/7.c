#include <stdio.h>

int main() {
    int units;
    float total_bill = 0.0;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    switch (units / 50) {
        case 0:
            total_bill = units * 0.50;
            break;
        case 1:
            total_bill = 50 * 0.50 + (units - 50) * 0.75;
            break;
        case 2:
            total_bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
            break;
        default:
            total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
            break;
    }

    printf("Total electricity bill: Rs. %.2f\n", total_bill);

    return 0;
}

