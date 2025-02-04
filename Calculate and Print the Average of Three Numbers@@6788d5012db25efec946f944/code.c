#include <stdio.h>
int main() {
    int num1, num2, num3, greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    greatest = (num1 + num2 + num3) / 3.0; 

    printf("Average: %.2f\n", greatest);

    return 0;
 
}
