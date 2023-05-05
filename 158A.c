#include <stdio.h>

int main() {
    int n, k, ans;
    ans = 0;
    
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; ++i) {
        scanf("%d ", &n);
        if (n > 0) ++ans;
        else break;
    }
    printf("%d", ans);

    return 0;
}