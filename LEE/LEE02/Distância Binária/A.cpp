#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int N;
    cin >> N;

    for (long long int i = 0; i < N; i++) {
        // T1 and T2 are the integers, TF is the final integer
        long long int T1, T2, TF;
        cin >> T1;
        cin >> T2;
        TF = T1 ^ T2;
        int result = __builtin_popcountll(TF);
        cout << result << endl;
    }

    return 0;
}