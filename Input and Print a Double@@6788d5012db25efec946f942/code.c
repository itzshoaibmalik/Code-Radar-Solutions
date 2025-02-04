#include <stdio.h>

int main() {
    double num1, num2;

    scanf("%lf %lf", &num1, &num2);

    printf("You entered: %.2lf\n", num1);
    printf("You entered: %.2lf", num2);


    return 0;
}
