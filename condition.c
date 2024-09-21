#include<stdio.h>
int main(){
    int number;

    // Asking for user input
    printf("Enter a number :");
    scanf("%d", &number);

    //if-else statement to check the number
    if(number > 0){
        printf("the number is positive .\n");
        }
        else if(number < 0){
            printf("the number is negative .\n");
            }
            else{
                printf("the number is zero.\n");
            }
            return 0;
        }
