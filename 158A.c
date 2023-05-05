#include <stdio.h>

int main() {
    int i, n, k, score, min_score, ans;
    ans = 0;
    min_score = 0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; ++i) {
        scanf("%d ", &score);
        if (i == k) min_score = score;
        if (score > 0 && score >= min_score) ++ans;
        else break;
    }

    printf("%d", ans);

    return 0;
}