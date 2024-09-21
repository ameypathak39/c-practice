#include <stdio.h>

// Function to demonstrate pass by value
void addByValue(int a, int b) {
    int sum = a + b;
    printf("Sum (Pass by Value): %d\n", sum);
}

// Function to demonstrate pass by reference
void addByReference(int *a, int *b) {
    int sum = *a + *b;  // Dereferencing pointers to get the values
    printf("Sum (Pass by Reference): %d\n", sum);
}

int main() {
    int x = 5, y = 10;

    // Pass by value
    addByValue(x, y);  // Sending copies of x and y to the function

    // Pass by reference
    addByReference(&x, &y);  // Sending the addresses of x and y to the function

    return 0;
}
