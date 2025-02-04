#include <stdio.h>
int main() {
    float num1, num2, product;

    scanf("%f %f", &num1, &num2);  // Corrected format specifiers
    product = num1 * num2;

    printf("Product: %.2f\n", product);  // Corrected format specifier

    return 0;
}
