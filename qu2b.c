#include <stdio.h>
#include <stdbool.h>

bool checkDuplicatesOrDistinct(int arr[], int n) {
    bool seen[1000] = {false}; 

    for (int i = 0; i < n; i++) {
        if (seen[arr[i]]) { 
            return true;
        }
        seen[arr[i]] = true; 
    }

    return true;
} 

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    if (checkDuplicatesOrDistinct(arr, n)) {
        printf("Condition met: either a value appears twice or all elements are distinct.\n");
    } else {
        printf("Condition not met.\n");
    }

    return 0;
}
