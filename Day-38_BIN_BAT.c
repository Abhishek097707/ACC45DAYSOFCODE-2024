#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        int total_time = 0;
        int rounds = log2(N);
        
        total_time += (rounds - 1) * B;
        total_time += rounds * A;
        
        printf("%d\n", total_time);
    }
    
    return 0;
}