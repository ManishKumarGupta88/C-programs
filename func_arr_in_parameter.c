#include <stdio.h>

// Function to print elements of an array
void printArray(int arr[], int size) {
    printf("Elements of the array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Define an array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to print the array
    printArray(arr, size);

    return 0;
}
