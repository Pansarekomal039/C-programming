#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0) {  // Base case: factorial of 0 is 1
        return 1;
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);

    return 0;
}
