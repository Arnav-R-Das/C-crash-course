#include <stdio.h>

int main() {

    int a, b;

    printf("Enter first integer: \n");
    scanf("%d", &a);

    printf("Enter second integer: \n");
    scanf("%d", &b);

    printf("Sum of %d and %d is %d", a, b, a + b);

    return 0;
}