#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(const char *R, const char *S) {
    int lenR = strlen(R);
    int lenS = strlen(S);

    if (lenR != lenS) { return false; }

    vector<int> freq(256, 0);

    for (int i = 0; i < lenR; i++) {
        freq[(unsigned char)R[i]]++;
        freq[(unsigned char)S[i]]--;
    }

    for (int count : freq) {
        if (count != 0) { return false; }
    } return true;
}

int main() {
    int T;
    scanf("%d", &T);

    char R[80001], S[80001];

    for (int i = 0; i < T; i++) {
        scanf("%s %s", R, S);

        if (areAnagrams(R, S)) {
            printf("ANAGRAMAS\n");
        } else {
            printf("DIFERENTES\n");
        }
    }

    return 0;
}