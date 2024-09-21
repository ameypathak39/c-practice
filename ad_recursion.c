#include <stdio.h>

// Function to perform Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If only one disk, move it directly
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Recursive case: Move n-1 disks from source to auxiliary, using destination as buffer
    towerOfHanoi(n - 1, source, destination, auxiliary);
    
    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);
    
    // Move the n-1 disks from auxiliary to destination, using source as buffer
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;

    // Input the number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the recursive function
    towerOfHanoi(n, 'A', 'B', 'C'); // A, B, C are the names of the rods

    return 0;
}
