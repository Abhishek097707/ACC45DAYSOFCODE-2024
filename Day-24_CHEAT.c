#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int tuesdays = N / 7;
        if (N % 7 >= 2) {
            tuesdays++;
        }
        printf("%d\n", tuesdays);
    }
    return 0;
}