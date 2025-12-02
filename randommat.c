#include <stdio.h> 
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time() to seed the random number generator

int main() {
    // Define the dimensions of the matrix
    int rows = 225, cols = 225;
    int matrix[225][225];

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate random values for the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Fill the matrix with random values between 0 and 99
            matrix[i][j] = rand() % 100;
        }
    }

    // Print the matrix
    printf("The matrix with random values is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
