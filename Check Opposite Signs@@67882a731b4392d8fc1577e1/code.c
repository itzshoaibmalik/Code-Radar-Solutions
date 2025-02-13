#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("True\n");
    } 
    if (num1 < num2) {
        printf("False\n");
    } 
    // if (num1 == num2) {
    //     printf("num1 is equal to num2\n");
    // }

    else if (num1 < 0 && num2 > 0) {
        printf("False\n");
    } 
    
    } else{
        printf("True\n");
    
    // if (!(num1 > 0)) {
    //     printf("num1 is not positive\n");
    // }

    return 0;
}
