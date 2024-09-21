#include <stdio.h>
#include <string.h>

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a structure variable
    struct Person person1;

    // Initialize the structure
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.height = 5.9;

    // Print structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f feet\n", person1.height);

    // Modify structure members
    person1.age += 1;
    person1.height = 6.0;

    // Print updated values
    printf("\nUpdated Age: %d\n", person1.age);
    printf("Updated Height: %.1f feet\n", person1.height);

    return 0;
}
