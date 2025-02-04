#include <stdio.h>

int main() {
    int num;

    // Taking integer input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Printing in Hexadecimal and Octal formats
    printf("Hexadecimal: %X\n", num);  // Hexadecimal in uppercase
    printf("Octal: %o\n", num);  // Octal representation

    return 0;
}
