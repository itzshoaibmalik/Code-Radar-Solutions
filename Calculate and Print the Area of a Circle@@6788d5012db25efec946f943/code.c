#include <stdio.h>

int main() {
    float radius;
    float area;

    scanf("%d", &radius);

    area = 3.14 * radius * radius;

    printf("Area: %.2f\n", area);

    return 0;
}
