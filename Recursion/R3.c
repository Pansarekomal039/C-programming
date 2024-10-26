#include <stdio.h>

int sumOfDigits(int n) {
    // Base case: when the number becomes 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: last digit + sum of the remaining digits
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main() {
    int num = 1234;
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}
