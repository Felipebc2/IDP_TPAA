#include <stdio.h>

int main() {
    unsigned long long int N, temp, sum_total, sum, miss;

    scanf("%lld", &N);
    sum_total = N * (N + 1) / 2;
    sum = 0;

    if (2 <= N <= 100000) {
        for (size_t i = 0; i < N - 1; i++) {
        scanf("%lld", &temp);
        sum += temp;
        }
    } else {
        return 0;
    }

    miss = (sum_total - sum);
    printf("%lld\n", miss);

    return 0;
}