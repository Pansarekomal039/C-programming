#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    // Open the file for reading
    FILE *fp = fopen("Numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found error\n");
        return 1;  // Exit if the file is not found
    }

    // Read the number of elements (n) from the file
    if (fscanf(fp, "%d", &n) != 1) {
        printf("Error reading the number of elements\n");
        fclose(fp);
        return 1;
    }

    // Allocate memory for the array
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation error\n");
        fclose(fp);
        return 1;
    }

    // Read n integers from the file and store them in the array
    for (i = 0; i < n; i++) {
        if (fscanf(fp, "%d", &arr[i]) != 1) {
            printf("Error reading number %d\n", i + 1);
            free(arr);
            fclose(fp);
            return 1;
        }
    }

    // Close the file
    fclose(fp);

    // Print the array
    printf("The numbers are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
