#include <stdio.h>

// Step 1: Define the function prototype
void modifyArray(int* arr, int size);

int main() {
    // Declare and initialize the array
    int myArray[] = {10, 20, 30, 40, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Use pointers to access and modify elements
    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Call the function to modify the array
    modifyArray(myArray, size);

    // Print the modified array
    printf("Modified array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

// Step 2: Implement the function
void modifyArray(int* arr, int size) {
    // Pointer arithmetic to access and modify elements
    for(int i = 0; i < size; i++) {
        // Incrementing the value at index i by 5
        *(arr + i) += 5;
    }
}
