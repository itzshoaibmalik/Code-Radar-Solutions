#include <stdio.h>
int main() {
    float num1, num2, num3, greatest;

    scanf("%d %d %d", &num1, &num2, &num3);

    greatest = (num1 + num2 + num3) / 3.0; 

    printf("Average: %.2f\n", greatest);

    return 0;
 
}
