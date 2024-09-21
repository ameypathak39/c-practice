#include <stdio.h>

int main() {
    // Single-dimensional array
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Printing array elements and size
    printf("Single-dimensional array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    // Calculating the size of the array
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    printf("\nSize of the array: %d\n\n", arraySize);
    
    // Multidimensional array (2D array)
    int multiArr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    // Printing 2D array elements
    printf("Multidimensional array (2D array):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("multiArr[%d][%d] = %d ", i, j, multiArr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
