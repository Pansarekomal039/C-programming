#include <stdio.h>
#include <stdlib.h>

// Function to find two indices that add up to the target
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                // Allocating memory to store the two indices
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2; // Setting return size
                return result; // Return the result array
            }
        }
    }
    *returnSize = 0;
    return NULL; // Return NULL if no solution is found (though it is guaranteed to have one solution)
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    // Calling the twoSum function
    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    // Printing the result
    if (result != NULL && returnSize == 2) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("No solution found.\n");
    }

    // Freeing the allocated memory
    free(result);

    return 0;
}
