#include <stdio.h>

int main() {
    int numbers[10];  // Array to store 10 integers
    int sum = 0;      // Variable to store the sum of the numbers
    float average;    // Variable to store the average
 
    
// Read 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);  // Read each integer
        sum += numbers[i];         // Add the integer to the sum
    }

    // Calculate the average
    average = sum / 10.0;

    // If the average is greater than 50, divide it by 2
    if (average > 50) {
        average /= 2;
    }

    // Print the final average
    printf("The final average is: %.2f\n", average);

    return 0;
}
