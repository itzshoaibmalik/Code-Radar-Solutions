#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("num1 is greater than num2\n");
    } 
    if (num1 < num2) {
        printf("num1 is less than num2\n");
    } 
    if (num1 == num2) {
        printf("num1 is equal to num2\n");
    }

    if (num1 > 0 && num2 > 0) {
        printf("Both numbers are positive\n");
    } 
    if (num1 < 0 || num2 < 0) {
        printf("At least one number is negative\n");
    }
    if (!(num1 > 0)) {
        printf("num1 is not positive\n");
    }

    return 0;
}
