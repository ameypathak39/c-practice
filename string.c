#include <stdio.h>
#include <string.h>

int main() {
    // Declaration and initialization of strings
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];  // To hold concatenated string

    // Print strings
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    // String length
    printf("Length of String 1: %lu\n", strlen(str1));
    printf("Length of String 2: %lu\n", strlen(str2));

    // String concatenation
    strcpy(str3, str1);         // Copy str1 into str3
    strcat(str3, " ");          // Concatenate a space
    strcat(str3, str2);         // Concatenate str2 to str3
    printf("Concatenated String: %s\n", str3);

    // String comparison
    if (strcmp(str1, str2) == 0) {
        printf("String 1 and String 2 are equal\n");
    } else {
        printf("String 1 and String 2 are not equal\n");
    }

    // Copying a string
    strcpy(str1, "New String");
    printf("After copying: %s\n", str1);

    return 0;
}
  
