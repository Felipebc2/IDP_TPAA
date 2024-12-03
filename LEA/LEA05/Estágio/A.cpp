#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, result;
    cin >> S;

    sort(S.begin(), S.end());
    result.push_back(S[0]);

    for (int i = 1; i < S.size(); i++) {
        if (S[i] != S[i - 1]) { result.push_back(S[i]); }
    }

    cout << result << endl;

}