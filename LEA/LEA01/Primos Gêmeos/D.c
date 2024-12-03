#include <stdio.h>

int crivo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) if (num % i == 0) return 0;
    return 1;
}

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int V;
        scanf("%d", &V);

        if (crivo(V) && (crivo(V - 2) || crivo(V + 2))) {
            printf("O numero %d eh um primo gemeo\n", V);
        } else {
            printf("O numero %d nao eh um primo gemeo\n", V);
        }
    }

    return 0;
}