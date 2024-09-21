#include <stdio.h>

// Global variable (accessible anywhere in the program)
int globalVar = 10;

void scopeDemo() {
    // Local variable (only accessible inside this function)
    int localVar = 20;
    printf("Inside scopeDemo function:\n");
    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n\n", localVar);
}

int main() {
    // Local variable (only accessible inside the main function)
    int localVar = 30;
    
    printf("Inside main function:\n");
    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n\n", localVar);

    // Calling the scopeDemo function
    scopeDemo();

    // Accessing the global variable inside main
    globalVar = 50;
    printf("After modifying global variable inside main:\n");
    printf("Global variable: %d\n", globalVar);

    return 0;
}
