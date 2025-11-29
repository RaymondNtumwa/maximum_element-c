#include <stdio.h>

// Define the size of the array
#define ARRAY_SIZE 10

int main() {
    // 1. Initialize Array
    int data_array[ARRAY_SIZE] = {18, 45, 9, 72, 30, 99, 51, 6, 88, 25};
    int max_element;

    // Display the array contents for context
    printf("The current array elements are:\n");
    printf("[");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d%s", data_array[i], (i == ARRAY_SIZE - 1) ? "" : ", ");
    }
    printf("]\n");

    max_element = data_array[0];

    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (data_array[i] > max_element) {
            max_element = data_array[i];
        }
    }

    printf("maximum element: %d\n", max_element);

    return 0;
}