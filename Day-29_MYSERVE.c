#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q);
        
        int total_points = P + Q;
        int serve_block = total_points / 2;
        
        if (serve_block % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
    
    return 0;
}