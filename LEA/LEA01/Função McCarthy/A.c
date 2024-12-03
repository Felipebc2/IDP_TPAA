#include <stdio.h>

int main() {
    unsigned long long int C, N;
    scanf("%lld", &C);

    for (int i = 0; i < C; i++) {
        scanf("%lld", &N);
        for (int j = 1; j != 0;)
        {
        if (N > 100) {
            N = N - 10;
            j--;
        } else {
            N = N + 11;
            j++;
            }
        }
        printf("%lld\n", N);
    }
    return 0;
}