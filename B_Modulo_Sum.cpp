#include <stdio.h>
#include <string.h>

int dp[1005][1005], a[1000005];

int main() {
    int n, m, i, j;

    while (scanf("%d%d", &n, &m) != EOF) {
        memset(dp, 0, sizeof(dp));

        for (i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            a[i] = a[i] % m;
        }

        if (n > m) {
            printf("YES\n");
            continue; 
        }

        dp[1][a[1]] = 1;

        for (i = 2; i <= n; i++) {
            dp[i][a[i]] = 1;
            for (j = 0; j < m; j++) {
                if (dp[i - 1][j]) {
                    dp[i][j] = 1;
                    dp[i][(j + a[i]) % m] = 1; 
                }
            }
        }

        if (dp[n][0]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
