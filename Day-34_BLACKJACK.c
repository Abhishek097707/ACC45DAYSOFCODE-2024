#include <stdio.h>

int main() {
    int T, A, B;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &A, &B);
        int third_number = 21 - (A + B);
        if (third_number >= 1 && third_number <= 10) {
            printf("%d\n", third_number);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}