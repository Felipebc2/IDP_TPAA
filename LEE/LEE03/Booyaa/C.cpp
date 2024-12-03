#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long F, D;
    cin >> F >> D;
 
    vector<long long> S(30);
    long long sum = 0;
 
    for (int i = 0; i < 30; i++) {
        cin >> S[i];
        sum += S[i];
    }

    double average = (sum / 30.0);
    long long Result = F;

    for (long long i = 0; i < D; i++) {
        Result += ceil(average);

        sum -= S[i % 30];
        long long NF = ceil(average);
        sum += NF;
        average = sum / 30.0;
        S[i % 30] = NF;
    }

    cout << Result << endl;
 
    return 0;
}
