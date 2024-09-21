#include <stdio.h>

int main() {
    // Declare an array of 5 integers
    int numbers[5];

    // Assign values to the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Access and print the array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    // Modify an element in the array
    numbers[2] = 100;
    printf("\nModified element at index 2: %d\n", numbers[2]);

    return 0;
}
