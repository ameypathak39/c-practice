#include<stdio.h>

int main(){
    int a = 10, b = 20, result;

    // Arithmetic Operators
    result = a + b; // Addition
    printf("Addition: %d + %d = %d\n", a, b, result);

    result = b - a; // Subtraction
    printf("Subtraction: %d - %d = %d\n", b, a, result);

    result = a * b; // Multiplication
    printf("Multiplication: %d * %d = %d\n", a, b, result);

    result = b / a; // Division
    printf("Division: %d / %d = %d\n", b, a, result);

    result = b % a; // Modulus
    printf("Modulus: %d %% %d = %d\n", b, a, result);

    // Relational Operators
    printf("Is a equal to b? %d\n", a == b); // Equals
    printf("Is a not equal to b? %d\n", a != b); // Not equal
    printf("Is a greater than b? %d\n", a > b); // Greater than
    printf("Is a less than or equal to b? %d\n", a <= b); // Less than or equal

    // Logical Operators
    printf("Logical AND (a < b && b > 0): %d\n", (a < b && b > 0)); // AND
    printf("Logical OR (a > b || b > 0): %d\n", (a > b || b > 0));  // OR
    printf("Logical NOT (!(a < b)): %d\n", !(a < b));  // NOT

    // Assignment Operators
    result = a;
    printf("Assignment: result = %d\n", result);

    result += b; // result = result + b
    printf("Addition Assignment: result += b results in %d\n", result);

    // Increment and Decrement Operators
    result = a++;
    printf("Post-Increment: a++ results in %d (value of a before increment)\n", result);

    result = ++b;
    printf("Pre-Increment: ++b results in %d (value of b after increment)\n", result);

    return 0;  // This should be the return statement
}
