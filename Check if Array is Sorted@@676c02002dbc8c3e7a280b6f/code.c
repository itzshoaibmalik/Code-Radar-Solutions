#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Corrected loop and logic
    for (int j = 0; j < n - 1; j++) {
        if (arr[j] > arr[j++]) {
            printf("Not Sorted"); // Print and exit if not sorted
            return 0;
        }
    }

    printf("Sorted\n"); // Print if the loop completes (sorted)
    return 0;
}