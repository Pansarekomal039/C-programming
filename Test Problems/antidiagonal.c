#include <stdio.h>

#define N 4 // Change this for different sizes of matrix

void printAntiDiagonals(int matrix[N][N], int n) {
    // Print the anti-diagonals
    for (int sum = 0; sum < 2 * n - 1; sum++) {
        int start_row = sum < n ? 0 : sum - n + 1;
        int end_row = sum < n ? sum : n - 1;
        
        for (int i = start_row; i <= end_row; i++) {
            int j = sum - i;
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Move to next line for next anti-diagonal
    }
}

int main() {
    int matrix[N][N] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
    
    printf("The anti-diagonals of the matrix are:\n");
    printAntiDiagonals(matrix, N);

    return 0;
}
