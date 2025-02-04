#include <stdio.h>
int main() {
    float num1, num2, product;
    int intProduct;

    scanf("%f %f", &num1, &num2);
    product = num1 * num2;
    intProduct = (int)product;  // Convert float to int for hex & octal

    printf("Hexadecimal: %x\n", intProduct);
    printf("Octal: %o\n", intProduct);

    return 0;
}
