#include <stdio.h>

int main() {
    int large_1, large_2, small_1, small_2;
    int t, n, m, nm, num;
    scanf("%d", &t);
    for (; t; --t) {
        large_1 = -1e6, large_2 = -1e6, small_1 = 1e6, small_2 = 1e6;
        scanf("%d %d", &n, &m);
        for (nm = n * m; nm; --nm) {
            scanf("%d", &num);
            if (num > large_1) {
                large_2 = large_1;
                large_1 = num;
            } else if (num > large_2) {
                large_2 = num;
            }
            if (num < small_1) {
                small_2 = small_1;
                small_1 = num;
            } else if (num < small_2) {
                small_2 = num;
            }
        }

        // printf("[DEBUG] %d %d %d %d\n", small_1, small_2, large_2, large_1);
        if (n < m) {int i = n; n = m; m = i;}
        if (small_2 - small_1 < large_1 - large_2) {
            // large_1 at [0, 0]
            int ans = (m - 1) * (large_1 - small_2) + (n - 1) * m * (large_1 - small_1);
            printf("%d\n", ans);
        } else {
            // small_1 at [0, 0]
            int ans = (m - 1) * (large_2 - small_1) + (n - 1) * m * (large_1 - small_1);
            printf("%d\n", ans);
        }
    }
    return 0;
}