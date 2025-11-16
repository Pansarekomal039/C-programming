
#include <stdio.h>
  
void checkOddEven(int N) { 
  
    // Find the remainder
    int r = N % 2;

    // Condition for even
    if (r == 0)  {
        printf("Even");
    }
  
    // Condition for odd number
    else  {
        printf("Odd");
    }
}

int main() {
    int N = 101; 
    checkOddEven(N);
    return 0;
}
