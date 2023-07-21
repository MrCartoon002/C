#include <stdio.h>

int main() {
    int coins[] = {1, 2, 5};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int amount = 7;

    int dp[amount + 1];
    dp[0] = 1;

int i,j;
    for (i = 1; i <= amount; i++) {
        dp[i] = 0;
    }

    for (i = 0; i < numCoins; i++) {
        for (j = coins[i]; j <= amount; j++) {
            dp[j] += dp[j - coins[i]];
        }
    }

    int ways = dp[amount];

    printf("Number of ways to make change: %d\n", ways);

    return 0;
}
