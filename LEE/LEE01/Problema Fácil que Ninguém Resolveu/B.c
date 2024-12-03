#include <stdio.h>

int main(){
    unsigned long long int N;
    scanf("%lld", &N);

    while (N != 1) {
        printf("%lld ", N);
        if (N % 2 == 0) {
            N = N / 2;
        } else {
            N = N * 3 + 1;
        }
    }

printf("%lld\n", N);

    return 0;
}