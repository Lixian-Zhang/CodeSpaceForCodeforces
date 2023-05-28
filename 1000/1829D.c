#include <stdio.h>
#include <stdbool.h>


int pow_of_3[15] = {1, 3, 9, 27, 81, 243, 729, 2187, 6561, 19683, 59049, 177147, 531441, 1594323, 4782969};

bool can_make_a_pile(n, m) {
    int ord = 0, t = n;
    while (t % 3 == 0) {
        ++ord;
        t /= 3;
    }
    for (int i = 0; i <= ord; ++i) {
        for (int j = 0; i + j <= ord; ++j) {
            if (pow_of_3[i] * (1 << j) * t == m) return true;
        }
    }
    return false;
};

int main() {
    int n, m, t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i) {
        scanf("%d %d", &n, &m);
        if (can_make_a_pile(n, m)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}