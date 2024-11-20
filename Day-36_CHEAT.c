#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int tuesdays = (N >= 2) ? (N - 2) / 7 + 1 : 0;
        printf("%d\n", tuesdays);
    }
    return 0;
}