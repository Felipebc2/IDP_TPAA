#include <stdio.h>

int main(void) {
    int N, Prime;
    scanf("%d", &N);
        for (size_t i = 0; i < N; i++) {
            scanf("%d", &Prime);
            int isPrimo = 1;
            if (Prime <= 1) { isPrimo = 0; }
            else if (Prime == 2 || Prime == 3) { isPrimo = 1; }
            else if (Prime % 2 == 0 || Prime % 3 == 0) { isPrimo = 0; }
            else { for (int j = 5; j * j <= Prime; j += 6) {
                if (Prime % j == 0 || Prime % (j + 2) == 0) {
                    isPrimo = 0;
                    break;
                    }
                }
            }
            if (isPrimo) {
                printf("o numero %d eh primo\n", Prime);
            } else {printf("o numero %d nao eh primo\n", Prime); }
    }
    return 0;
}