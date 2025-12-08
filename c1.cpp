#include <stdio.h>

int main() {
    int a, b, c;
    int l1, l2, l3, sum;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    l1 = a % 10;
    l2 = b % 10;
    l3 = c % 10;

    sum = l1 + l2 + l3;

    printf("Sum of last digits = %d\n", sum);
    return 0;
}

