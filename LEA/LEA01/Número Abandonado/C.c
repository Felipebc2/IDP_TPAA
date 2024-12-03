#include <stdio.h>

int main(){
    int N, num, result;

    while (scanf("%d", &N)) {
        if (N == -1) {
            break;
        }
        result = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &num);
            result ^= num;
        }
        printf("%d\n", result);
    }
    return 0;
}