#include <stdio.h>

double calculate_circle_area(double radius)
 {
    double pi = 3.14159;
    double area = pi * radius * radius;
    return area;
}

int main()

{
    double radius = 5.0;
    double area = calculate_circle_area(radius);
    printf("The area of a circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}
