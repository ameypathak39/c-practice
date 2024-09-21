#include <stdio.h>

// Declaring an enum for days of the week
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main() {
    // Declare a variable of enum type
    enum week today;

    // Assign a value to the variable
    today = Wednesday;

    // Print the value of the variable (it's the index, starting from 0)
    printf("Today is: %d\n", today);  // Output will be 3 because Wednesday is the 4th item, starting at 0

    // Using enum in a switch-case
    switch (today) {
        case Sunday:
            printf("It's Sunday, time to relax!\n");
            break;
        case Monday:
            printf("It's Monday, back to work!\n");
            break;
        case Wednesday:
            printf("It's Wednesday, midweek!\n");
            break;
        case Friday:
            printf("It's Friday, the weekend is near!\n");
            break;
        default:
            printf("Just another day of the week!\n");
            break;
    }

    return 0;
}
