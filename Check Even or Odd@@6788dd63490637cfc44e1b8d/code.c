#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    if (num & 1) {
        printf("Odd\n", num);
    } else {
        printf("Even\n", num);
    }

    return 0;
}
