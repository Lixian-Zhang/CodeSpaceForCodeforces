#include <stdio.h>

int main() {
    int n, x;
    x = 0;
    char buff[3];

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        sscanf("%3s", buff);
        if (buff[1] == '+') ++x;
        else --x;
    }
    printf("%d", x);

    return 0;
}