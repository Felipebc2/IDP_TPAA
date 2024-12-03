#include <stdio.h>

int main(){
    unsigned long long N;
    int Q;

    scanf("%llu %d", &N, &Q);

    for (int i = 0; i < Q; i++) {
        int C;
        scanf("%d", &C);
        if (N & (1ULL << C)) {
            printf("acesa\n");
        } else {
            printf("apagada\n");
        }
    }

    return 0;
}