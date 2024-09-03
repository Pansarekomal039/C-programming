#include <stdio.h>

int main() {
    int num[10];  // Array to hold 10 integers
    int min, max, i;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);  // Read integers from user input
    }

    // Initialize min and max with the first element of the array
    min = max = num[0];

    // Loop through the array to find the min and max
    for (i = 1; i < 10; i++) {
        if (num[i] > max) {
            max = num[i];  // Update max if the current number is greater
        }
        if (num[i] < min) {
            min = num[i];  // Update min if the current number is smaller
        }
    }

    // Print the results
    printf("Maximum value from the given array is: %d\n", max);
    printf("Minimum value from the given array is: %d\n", min);

    return 0;
}
