#include <stdio.h>

int main(){
    int D;
    char N[100001];

    while (scanf("%d", &D) && D != -1) {
        scanf("%s", N);
        int Sum = 0;

        for (int i = 0; i < D; i++) {
            Sum += N[i] - '0';
        }
        if (Sum % 3 == 0) {
            printf("%d sim\n", Sum);
            } else {
            printf("%d nao\n", Sum);
        }
    }

    return 0;
}