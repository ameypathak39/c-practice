#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Asking for user input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Performing addition
    sum = num1 + num2;

    // Displaying the result
    printf("Sum: %d\n", sum);

    return 0;
}
