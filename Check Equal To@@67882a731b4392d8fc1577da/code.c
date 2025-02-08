#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);  // Correct scanf format

    if (num1 == num2) {  // Correct if statement syntax
        printf("True\n");  // Added semicolon
    } else {
        printf("False\n");  // Added semicolon
    }

    return 0;
}
