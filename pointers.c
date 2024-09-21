#include<stdio.h>

int main(){
    int a = 10;         // Declare an integer variable
    int *ptr = &a;      // Declare a pointer variable and assign the address of 'a'

    // Display the value of "a" using the variable
    printf("Value of a = %d\n", a);

    // Display the value of "a" using pointer
    printf("Value of a using pointer = %d\n", *ptr);

    // Display the address of 'a'
    printf("Address of a = %p\n", (void*)&a);

    // Display the address stored in the pointer variable
    printf("Address stored in pointer ptr = %p\n", (void*)ptr);

    // Display the address of the pointer itself
    printf("Address of pointer ptr = %p\n", (void*)&ptr);

    // Modify the value of 'a' using the pointer
    *ptr = 20;
    printf("Value of a after modification = %d\n", a);

    return 0;
}
