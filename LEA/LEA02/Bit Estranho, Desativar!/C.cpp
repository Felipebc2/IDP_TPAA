#include <bits/stdc++.h>
using namespace std;

int main() {
    int bit;
    long long N;
    cin >> N >> bit;

    for (int i = 0; i < N; i++) {
        long long int value;
        cin >> value;
        
        value &= ~(1LL << bit);
        cout << value << endl;
    }

    return 0;
}
