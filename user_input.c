#include<stdio.h>

int main(){
    char name[30];
    int age;
    float height;

    // taking string input
    printf("Enter your name: ");
    // Using fgets to read a string with spaces
    fgets(name, sizeof(name), stdin);

    // taking integer input
    printf("Enter your age: ");
    scanf("%d", &age);

    // taking float input
    printf("Enter your height: ");
    scanf("%f", &height);

    // displaying the given values
    printf("hello %s", name); // fgets already includes newline character
    printf("your age is : %d\n", age);
    printf("your height is :  %f\n", height);

    return 0;
}
