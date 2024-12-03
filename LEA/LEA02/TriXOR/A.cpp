#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int A, B, Y;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A >> B >> Y;
        int bitwiseXOR = A ^ B;
        long long int result = Y ^ bitwiseXOR;
        if ((A ^ B ^ result) == Y) {
            cout << result << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
