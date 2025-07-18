#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n) {
    if (n <= 2) return n; 
    int* dp = (int*) malloc((n + 1) * sizeof(int));
    dp[1] = 1; 
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    int result = dp[n];
    free(dp);
    return result;
}
