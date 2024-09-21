#include<stdio.h>

int main(){
    int num = 10;
    // Declare an integer variable

    int *ptr = &num;
    // Declare a pointer and assign it the address

    //print the value of 'num'
    printf(" Value of nums : %d\n", num);

    //print the address of 'num' using the & operator
    printf("Address of num: %p\n", &num);

    // print the value stored at the memory location pointed to by ' ptr '
    printf("Value at the address strong in ptr: %d\n", *ptr);

    //print the address stored in the pointer 'ptr'
    printf("Addess stored in ptr: %p\n", ptr);

    //print the address of the pointer itself
    printf("Address of ptr itself: %p\n", &ptr);

    return 0;
    

}
