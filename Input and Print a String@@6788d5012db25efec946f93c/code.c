#include <stdio.h>

int main() {
    char string[100]; // Declare a character array

    scanf("%s", string); // Remove &

    printf("You entered: %s\n", string);
    
    return 0;
}
