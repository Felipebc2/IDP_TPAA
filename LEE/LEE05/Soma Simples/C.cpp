#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    unordered_set<int> seen;
    int value;

    for (int i = 0; i < N; i++) {
        cin >> value;

        int complement = K - value;
        if (seen.find(complement) != seen.end()) {
            cout << value << " " << complement << endl;
            return 0;
        }
        seen.insert(value);
    }
    cout << "Nao existe" << endl;
    return 0;
}