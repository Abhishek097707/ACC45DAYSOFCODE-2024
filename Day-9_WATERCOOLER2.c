#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y);
        if (X >= Y) {
            printf("0\n");
        } else {
            printf("%lld\n", (Y - 1) / X);
        }
    }
    return 0;
}