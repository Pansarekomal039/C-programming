#include <stdio.h>

#define ROWS 3
#define COLS 4

void findRowMinMax(int arr[ROWS][COLS], int min[ROWS], int max[ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        min[i] = arr[i][0];
        max[i] = arr[i][0];
        for (int j = 1; j < COLS; j++) {
            if (arr[i][j] < min[i]) {
                min[i] = arr[i][j];
            }
            if (arr[i][j] > max[i]) {
                max[i] = arr[i][j];
            }
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {3, 5, 1, 9},
        {7, 8, 2, 4},
        {6, 0, 3, 5}
    };
    
    int min[ROWS], max[ROWS];
    
    findRowMinMax(arr, min, max);
    
    printf("Row Min and Max values:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: Min = %d, Max = %d\n", i, min[i], max[i]);
    }

    return 0;
}
