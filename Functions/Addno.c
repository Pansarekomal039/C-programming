#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

int main() {
    int num1, num2, sum;

    // Input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    sum = addNumbers(num1, num2);

    // Output the result
    printf("Sum: %d\n", sum);

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}
