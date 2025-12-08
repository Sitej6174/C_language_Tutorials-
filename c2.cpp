#include <stdio.h>

int main() {
    float a, b, h, d1, d2;
    float area_of_trapezium, area_of_rhombus;

    printf("Enter parallel sides a and b of trapezium: ");
    scanf("%f %f", &a, &b);

    printf("Enter height h: ");
    scanf("%f", &h);

    printf("Enter diagonals d1 and d2 of rhombus: ");
    scanf("%f %f", &d1, &d2);

    area_of_trapezium = (a + b) * h / 2;
    area_of_rhombus = (d1 * d2) / 2;

    printf("Area of Trapezium = %.2f\n", (a + b) * h / 2);
    printf("Area of Rhombus = %.2f\n",(d1 * d2) / 2 );

    return 0;
}

