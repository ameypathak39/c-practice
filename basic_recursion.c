#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int number;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Calculate factorial and print the result
    printf("Factorial of %d is %d\n", number, factorial(number));

    return 0;
}
