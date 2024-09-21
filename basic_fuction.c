#include <stdio.h>

// function declaration
int add(int a, int b);
void greet();

int main()
{
    int num1 = 5;
    int num2 = 10;
    int sum;

    // calling the add function
    sum = add(num1, num2);

    printf("Sum of %d and %d is : %d\n", num1, num2, sum);

    // calling the greet function
    greet();

    return 0;
}

// function definition: add two integers and return the result
int add(int a, int b) {
    return a + b;
}

// function definition: print a greeting message
void greet() {
    printf("Hello, Amey is learning C language from basic to advance!\n");
}
