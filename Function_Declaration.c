#include <stdio.h>

// Function Declaration (Prototype)
int add(int a, int b);
void greet();

int main() {
    int num1 = 10, num2 = 20, sum;

    // Function Call
    sum = add(num1, num2); // Calling the add function
    printf("Sum: %d\n", sum);

    // Function Call
    greet();  // Calling the greet function

    return 0;
}

// Function Definition (Implementation)
int add(int a, int b) {
    return a + b;  // Returning the sum of two numbers
}

// Function Definition (Implementation)
void greet() {
    printf("Hello, welcome to the world of C programming!\n");
}
