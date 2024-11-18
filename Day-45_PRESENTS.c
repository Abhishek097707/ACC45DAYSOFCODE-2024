#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        long long N;
        scanf("%lld", &N);
        
        long long coins = (N / 5) * 4 + (N % 5);
        
        printf("%lld\n", coins);
    }
    
    return 0;
}