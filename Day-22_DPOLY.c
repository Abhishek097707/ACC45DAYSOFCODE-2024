#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int degree = -1;
        for (int i = 0; i < N; i++) {
            int Ai;
            scanf("%d", &Ai);
            if (Ai != 0) {
                degree = i;
            }
        }

        printf("%d\n", degree);
    }

    return 0;
}