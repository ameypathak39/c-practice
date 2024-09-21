#include <stdio.h>

int main() {
    int i;

    // For loop example
    printf("For loop:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // While loop example
    printf("While loop:\n");
    i = 1; // Resetting i
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    // Do-While loop example
    printf("Do-While loop:\n");
    i = 1; // Resetting i
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n\n");

    // Nested loop example
    printf("Nested loop:\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("(%d, %d) ", row, col);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
