#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, K, count = 0;
        scanf("%d %d", &N, &K);
        
        int minions[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &minions[i]);
        }
        
        for (int i = 0; i < N; i++) {
            if ((minions[i] + K) % 7 == 0) {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}