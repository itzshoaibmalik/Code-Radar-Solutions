#include <stdio.h>
int main() {
    float num1, num2, product;

    scanf("%f %f", &num1, &num2);  // Corrected format specifiers
    product = num1 * num2;

    printf("Product: %f\n", product);  // Corrected format specifier

    return 0;
}
