#include <stdio.h>

int main() {
    FILE *filePtr;
    char str[100];

    // Opening a file in write mode
    filePtr = fopen("example.txt", "w"); // Create or open a file named "example.txt"
    if (filePtr == NULL) {
        printf("Error: Could not open file for writing!\n");
        return 1;
    }

    // Writing to a file
    fprintf(filePtr, "Hello, this is a sample text file!\n");
    fprintf(filePtr, "Learning file handling in C is fun!\n");

    // Closing the file after writing
    fclose(filePtr);

    // Opening the same file in read mode
    filePtr = fopen("example.txt", "r"); // Open the file for reading
    if (filePtr == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }

    // Reading from the file and printing to the console
    printf("Reading from the file:\n");
    while (fgets(str, sizeof(str), filePtr) != NULL) {
        printf("%s", str); // Print the file contents line by line
    }

    // Closing the file after reading
    fclose(filePtr);

    return 0;
}
