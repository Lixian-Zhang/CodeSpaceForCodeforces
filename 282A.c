#include <stdio.h>

int main() {
    int n, x;
    x = 0;
    char buff[4];
    buff[3] = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%3s", buff);
        printf("%s\n", buff);
        if (buff[1] == '+') ++x;
        else --x;
    }
    printf("%d", x);

    return 0;
}