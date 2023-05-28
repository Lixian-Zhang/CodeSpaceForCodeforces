#include <stdio.h>

int main() {
    int n, a, b, c, cnt, ans;
    ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        cnt = 0;
        scanf("%d %d %d", &a, &b, &c);
        if (a) ++cnt;
        if (b) ++cnt;
        if (c) ++cnt;
        if (cnt >= 2) ++ans;
    }
    printf("%d", ans);
    return 0;
}