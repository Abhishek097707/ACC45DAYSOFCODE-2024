#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M);
        int candiesPerBag = K * M;
        int bagsNeeded = (N + candiesPerBag - 1) / candiesPerBag;
        printf("%d\n", bagsNeeded);
    }
    return 0;
}